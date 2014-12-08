
import delete_db
from user import User
from project import Project
from requirement import Requirement
from task import Task
from sprint import Sprint

class test_service():
    
        
    def create_user_and_login(self):
        user = User()
        user.add_user()
        user.login()
        return user
    
    def test_user(self):
        delete_db.delete_data_in_db()
        user = User()
        user.add_user()
        user.add_user()
        user.login()
        user.update_user()
        user.get_user()
        user.get_all_users()
        user.is_logged_in()
        user.delete_user()
            
    def test_project(self):
        delete_db.delete_data_in_db()
        user = self.create_user_and_login()
        user.add_user()
        project = Project(user.get_cookie(), user.get_user_id(), "1")
        project.create_project()
        project.create_project()
        project.update_project()
        project.add_dev_to_projects("2")
        project.get_users_per_project()
        project.get_users_ranking()
        project.remove_dev_to_projects()
        project.get_project()
        project.get_all_projects_for_user()
        sprint = Sprint(user.get_cookie(), project.get_id())
        sprint.add_sprint()
        req = Requirement(user.get_cookie(), project.get_id())
        req.add_req(project.get_id())
        task = Task(user.get_cookie(), req.get_id())
        task.add_task()
        project.get_current_sprint()
        project.get_progress()
        project.get_backlog()
        project.delete_project()
        
    def test_requirement(self):
        delete_db.delete_data_in_db()
        user = self.create_user_and_login()
        project = Project(user.get_cookie(), user.get_user_id(),"1")
        project.create_project()
        project.create_project()
        req = Requirement(user.get_cookie(), project.get_id())
        req.add_req(project.get_id())
        req.update_req()
        req.get_all_req()
        req.get_req()
        req.delete_req() 
        
    def test_task(self):
        delete_db.delete_data_in_db()
        user = self.create_user_and_login()
        project = Project(user.get_cookie(), user.get_user_id(),"1")
        project.create_project()
        req = Requirement(user.get_cookie(), project.get_id())
        req.add_req(project.get_id())
        task = Task(user.get_cookie(), req.get_id())
        task.add_task()
        task.update_task()
        task.get_task()
        task.get_all_task()
        task.delete_task()
            
            
    def test_sprint(self):
        delete_db.delete_data_in_db()
        user = self.create_user_and_login()
        project = Project(user.get_cookie(), user.get_user_id(),"1")
        project.create_project()
        sprint = Sprint(user.get_cookie(),project.get_id())
        sprint.add_sprint()
        sprint.update_sprint()
        sprint.get_all_sprint()
        sprint.get_sprint()
        sprint.get_tasks_of_sprint()
        sprint.delete_sprint()


if __name__ == "__main__":
    service = test_service()
    service.test_user()
    #service.test_project()
    #service.test_requirement()
    #service.test_task()
    #service.test_sprint()

        