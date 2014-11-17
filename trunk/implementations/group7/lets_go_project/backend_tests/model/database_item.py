import copy
import random
import string
import datetime


def get_random_id_list(highest_id, max_count):
    ids = xrange(1, highest_id + 1)
    return [random.choice(ids) for i in xrange(random.choice(xrange(max_count)))]


def get_random_string(max_length):
    lst = [random.choice(string.ascii_letters + " " + " " + " " + " " + " ") for n in xrange(1, random.randint(2, max_length))]
    return str.strip(str.upper(random.choice(string.ascii_letters)) + str.lower("".join(lst)))


def get_random_date_in_year(year):
    return datetime.date(year, random.randint(1, 12), random.randint(1, 28))


class DatabaseItem(object):

    def __init__(self):
        self.internal_fields = ['internal_fields', 'non_database_fields', 'database_fields', 'table_name']
        self.database_fields = []
        self.non_database_fields = []
        self.table_name = None

    def get_dict_without_fields(self, d, keys):
        for key in keys:
            del d[key]
        return d

    def get_dict_without_internal_fields(self):
        return self.get_dict_without_fields(copy.deepcopy(self.__dict__), self.internal_fields)

    def get_dict_without_id(self, d):
        return self.get_dict_without_fields(d, ['id'])

    def get_dict_without_non_database_fields(self, d):
        return self.get_dict_without_fields(d, self.non_database_fields)

    def replace_dates_with_strings(self, d):
        for key in d.keys():
            value = d[key]
            if type(value) == datetime.date:
                d[key] = str(value)
        return d

    def get_json_with_database_fields_with_id(self):
        return str(self.replace_dates_with_strings(self.get_dict_without_non_database_fields(self.get_dict_without_internal_fields()))).replace("'", '"')

    def get_json_with_database_fields_without_id(self):
        return str(self.replace_dates_with_strings(self.get_dict_without_id(self.get_dict_without_non_database_fields(self.get_dict_without_internal_fields())))).replace("'", '"')

    def get_json_with_all_fields_with_id(self):
        return str(self.replace_dates_with_strings(self.get_dict_without_internal_fields())).replace("'", '"')

    def get_json_with_all_fields_without_id(self):
        return str(self.replace_dates_with_strings(self.get_dict_without_id(self.get_dict_without_internal_fields()))).replace("'", '"')

    def get_insert_database_statement(self):
        fields = self.database_fields
        values = self.get_dict_without_id(self.get_dict_without_non_database_fields(self.get_dict_without_internal_fields()))
        values = [values[field] for field in fields]
        for i in xrange(len(values)):
            value = values[i]
            if type(value) == int:
                values[i] = str(value)
            else:
                values[i] = '"%s"' % str(value)

        return 'INSERT INTO %s (%s) VALUES(%s)' % (self.table_name, ', '.join(self.database_fields), ', '.join(values))


    def print_test_json(self):
        print self.get_json_with_database_fields_without_id()
        print self.get_json_with_database_fields_with_id()
        print self.get_json_with_all_fields_with_id()
        print self.get_json_with_all_fields_without_id()