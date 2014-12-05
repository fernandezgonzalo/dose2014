note
	description: "Summary description for {LINK}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LINK

create
	make

feature {NONE}
	work_item2: INTEGER

feature
	make(id:INTEGER)
		do
			work_item2:= id
		end

feature

	get2: INTEGER
		do
			Result:=work_item2
		end


end
