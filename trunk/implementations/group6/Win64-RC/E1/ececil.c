#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* DEMO_DB rows_to_json_array */
EIF_BOOLEAN _A36_33_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_NATURAL_32, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_n4, closed [3].it_r);
}

	/* DEMO_DB rows_to_json_array */
EIF_BOOLEAN __A36_33_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_NATURAL_32, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2, closed [2].it_n4, closed [3].it_r);
}

	/* DEMO_DB row_to_json_object */
EIF_BOOLEAN _A36_34_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_NATURAL_32, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_n4, closed [3].it_r);
}

	/* DEMO_DB row_to_json_object */
EIF_BOOLEAN __A36_34_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_NATURAL_32, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2, closed [2].it_n4, closed [3].it_r);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_launched */
void _A57_45_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_launched */
void __A57_45_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_stopped */
void _A57_46_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* WSF_NINO_SERVICE_LAUNCHER on_stopped */
void __A57_46_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* DEMO_SESSION_CTRL login */
void _A255_37_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* DEMO_SESSION_CTRL login */
void __A255_37_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* DEMO_SESSION_CTRL logout */
void _A255_38_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* DEMO_SESSION_CTRL logout */
void __A255_38_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* DEMO_SESSION_CTRL forgot_password */
void _A255_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* DEMO_SESSION_CTRL forgot_password */
void __A255_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* USER_CTRL get_users */
void _A258_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* USER_CTRL get_users */
void __A258_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* USER_CTRL create_user */
void _A258_40_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* USER_CTRL create_user */
void __A258_40_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* USER_CTRL delete_user */
void _A258_41_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* USER_CTRL delete_user */
void __A258_41_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* USER_CTRL send_invitation */
void _A258_42_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* USER_CTRL send_invitation */
void __A258_42_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* USER_CTRL change_password */
void _A258_43_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* USER_CTRL change_password */
void __A258_43_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* USER_CTRL update_user */
void _A258_44_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* USER_CTRL update_user */
void __A258_44_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL get_projects */
void _A259_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL get_projects */
void __A259_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL add_project */
void _A259_40_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL add_project */
void __A259_40_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL remove_project */
void _A259_41_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL remove_project */
void __A259_41_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL rename_project */
void _A259_42_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL rename_project */
void __A259_42_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL get_all_user_projects */
void _A259_43_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL get_all_user_projects */
void __A259_43_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL get_all_user_projects_not_login */
void _A259_44_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL get_all_user_projects_not_login */
void __A259_44_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL get_all_project_members */
void _A259_45_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL get_all_project_members */
void __A259_45_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL add_member_to_project */
void _A259_46_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL add_member_to_project */
void __A259_46_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL remove_member_from_project */
void _A259_47_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL remove_member_from_project */
void __A259_47_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL promote_owner */
void _A259_48_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL promote_owner */
void __A259_48_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* PROJECT_CTRL downgrade_owner */
void _A259_49_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* PROJECT_CTRL downgrade_owner */
void __A259_49_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* ITERATION_CTRL create_iteration */
void _A260_37_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* ITERATION_CTRL create_iteration */
void __A260_37_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* ITERATION_CTRL get_all_project_iterations */
void _A260_36_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* ITERATION_CTRL get_all_project_iterations */
void __A260_36_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* ITERATION_CTRL delete_iteration */
void _A260_38_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* ITERATION_CTRL delete_iteration */
void __A260_38_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL get_work_item_info */
void _A257_40_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL get_work_item_info */
void __A257_40_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL create_work_item */
void _A257_41_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL create_work_item */
void __A257_41_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL delete_work_item */
void _A257_43_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL delete_work_item */
void __A257_43_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL change_work_item */
void _A257_42_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL change_work_item */
void __A257_42_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL get_all_iteration_work_items */
void _A257_44_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL get_all_iteration_work_items */
void __A257_44_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL add_comment */
void _A257_45_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL add_comment */
void __A257_45_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL get_all_work_item_comments */
void _A257_46_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL get_all_work_item_comments */
void __A257_46_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL add_link */
void _A257_47_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL add_link */
void __A257_47_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL remove_link */
void _A257_48_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL remove_link */
void __A257_48_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL get_all_work_item_links */
void _A257_49_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL get_all_work_item_links */
void __A257_49_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WORK_ITEM_CTRL get_achieved_work_items */
void _A257_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* WORK_ITEM_CTRL get_achieved_work_items */
void __A257_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* SEARCH_CTRL search_users */
void _A256_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* SEARCH_CTRL search_users */
void __A256_39_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* SEARCH_CTRL search_work_items */
void _A256_40_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* SEARCH_CTRL search_work_items */
void __A256_40_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3);
}

	/* WGI_FILTER_RESPONSE commit */
void _A119_38 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* WGI_FILTER_RESPONSE commit */
void __A119_38 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of not_found_message */
void _A248_45_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F492_8276)(closed [1].it_r, open [1].it_r, closed [2].it_r, closed [3].it_r);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of not_found_message */
void __A248_45_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F492_8276)(closed [1].it_r, op_2, closed [2].it_r, closed [3].it_r);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of method_not_allowed_message */
void _A248_46_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F492_8277)(closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of method_not_allowed_message */
void __A248_46_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F492_8277)(closed [1].it_r, op_2, closed [2].it_r);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_BOOLEAN _A464_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_BOOLEAN _A920_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_BOOLEAN Result;
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = open [1].it_i4;
	Result = f_ptr (closed [1].it_r, arg1);
	RTLE;
	return Result;
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_BOOLEAN _A938_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_BOOLEAN _A485_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_i4);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_BOOLEAN __A464_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_BOOLEAN __A920_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	EIF_BOOLEAN Result;
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = op_2;
	Result = f_ptr (closed [1].it_r, arg1);
	RTLE;
	return Result;
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_BOOLEAN __A938_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_BOOLEAN __A485_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* MISMATCH_INFORMATION clear_all */
void A288_91 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F579_4687)(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A288_157 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_POINTER)) F584_4757)(Current, arg1, arg2);
}

	/* MISMATCH_INFORMATION set_string_versions */
void A288_158 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) F584_4758)(Current, arg1, arg2);
}

	/* SQLITE_DATABASE on_busy */
EIF_BOOLEAN A395_139 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_NATURAL_32)) F923_7945)(Current, arg1);
}

	/* SQLITE_DATABASE on_update_callback */
void A395_135 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_64 arg4)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER, EIF_INTEGER_64)) F923_7941)(Current, arg1, arg2, arg3, arg4);
}

	/* SQLITE_DATABASE on_rollback_callback */
void A395_133 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F923_7939)(Current);
}

	/* SQLITE_DATABASE on_commit_callback */
EIF_BOOLEAN A395_131 (EIF_REFERENCE Current)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) F923_7937)(Current);
}


#ifdef __cplusplus
}
#endif
