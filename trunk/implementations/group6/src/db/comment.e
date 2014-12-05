note
	description: "Summary description for {COMMENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMENT

create
	make

feature {NONE}
	text: STRING
	author: STRING

feature
	make(new_text:STRING; new_author:STRING)
		do
			text := new_text
			author := new_author
		end


feature
	getText:STRING
		do
			Result:=text
		end
	getAuthor:STRING
		do
			Result:=author
		end


end
