#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* DEMO_DB rows_to_json_array */
EIF_TYPED_VALUE _A34_33_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(629, "rows_to_json_array", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* DEMO_DB row_to_json_object */
EIF_TYPED_VALUE _A34_34_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(630, "row_to_json_object", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_launched */
void _A58_45_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(906, "on_launched", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_stopped */
void _A58_46_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(907, "on_stopped", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* DEMO_SESSION_CTRL login */
void _A226_37_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2525, "login", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* DEMO_SESSION_CTRL logout */
void _A226_38_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2526, "logout", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* USER_CTRL get_users */
void _A227_36_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2529, "get_users", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* USER_CTRL add_user */
void _A227_37_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2530, "add_user", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* USER_CTRL remove_user */
void _A227_38_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2531, "remove_user", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* USER_CTRL update_user */
void _A227_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2532, "update_user", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* USER_CTRL get_user_info */
void _A227_40_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2533, "get_user_info", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* USER_CTRL check_user_password */
void _A227_41_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2534, "check_user_password", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* PROJECT_CTRL add_project */
void _A36_32_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(684, "add_project", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* PROJECT_CTRL remove_project */
void _A36_33_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(685, "remove_project", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* PROJECT_CTRL rename_project */
void _A36_34_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(686, "rename_project", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* PROJECT_CTRL get_all_user_projects */
void _A36_35_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(687, "get_all_user_projects", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* PROJECT_CTRL get_all_project_members */
void _A36_36_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(688, "get_all_project_members", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* PROJECT_CTRL add_member_to_project */
void _A36_38_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(690, "add_member_to_project", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* PROJECT_CTRL remove_member_from_project */
void _A36_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(691, "remove_member_from_project", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* ITERATION_CTRL get_all_project_iterations */
void _A37_33_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(693, "get_all_project_iterations", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* ITERATION_CTRL create_iteration */
void _A37_34_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(694, "create_iteration", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* ITERATION_CTRL delete_iteration */
void _A37_35_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(695, "delete_iteration", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WORK_ITEM_CTRL get_work_item_info */
void _A35_33_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(674, "get_work_item_info", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WORK_ITEM_CTRL create_work_item */
void _A35_34_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(675, "create_work_item", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WORK_ITEM_CTRL delete_work_item */
void _A35_35_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(676, "delete_work_item", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WORK_ITEM_CTRL update_work_item */
void _A35_36_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(677, "update_work_item", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WORK_ITEM_CTRL get_all_iteration_work_items */
void _A35_37_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(678, "get_all_iteration_work_items", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WORK_ITEM_CTRL add_comment */
void _A35_38_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(679, "add_comment", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WORK_ITEM_CTRL get_all_work_item_comments */
void _A35_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(680, "get_all_work_item_comments", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WORK_ITEM_CTRL add_link */
void _A35_40_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(681, "add_link", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WORK_ITEM_CTRL remove_link */
void _A35_41_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(682, "remove_link", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WORK_ITEM_CTRL get_all_work_item_links */
void _A35_42_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(683, "get_all_work_item_links", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* WGI_FILTER_RESPONSE commit */
void _A121_38 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1590, "commit", closed [1].it_r))(closed [1].it_r);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of not_found_message */
void _A259_45_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F259_8241)(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of method_not_allowed_message */
void _A259_46_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F259_8242)(closed [1].it_r, open [1], closed [2]);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_TYPED_VALUE _A465_47_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3913, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_TYPED_VALUE _A484_47_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3913, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_TYPED_VALUE _A922_47_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3913, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_TYPED_VALUE _A944_47_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3913, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION clear_all */
void A287_91 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3944, "clear_all", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A287_157 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4008, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A287_158 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4009, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* WSF_REQUEST item */
EIF_TYPED_VALUE _A323_64_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5019, "item", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A389_159_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F389_8293)(closed [1].it_r, open [1]);
}

	/* SQLITE_DATABASE on_busy */
EIF_BOOLEAN A394_139 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	EIF_TYPED_VALUE u [1];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6204, "on_busy", Current))(Current, ((u [0].type = SK_UINT32), (u [0].it_n4 = arg1), u [0])).it_b;
}

	/* SQLITE_DATABASE on_update_callback */
void A394_135 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_64 arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6200, "on_update_callback", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT64), (u [3].it_i8 = arg4), u [3]));
}

	/* SQLITE_DATABASE on_rollback_callback */
void A394_133 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6198, "on_rollback_callback", Current))(Current);
}

	/* SQLITE_DATABASE on_commit_callback */
EIF_BOOLEAN A394_131 (EIF_REFERENCE Current)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6196, "on_commit_callback", Current))(Current).it_b;
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A287_91,
(fnptr)A287_157,
(fnptr)A287_158,
(fnptr)A394_139,
(fnptr)A394_135,
(fnptr)A394_133,
(fnptr)A394_131,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
