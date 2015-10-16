; Name		     : Yash Kumar Singh
; Roll Number  	 : 1310110373
; Major		     : Computer Science and Engineering
; Program Title	 : Checking if list is sorted or not PPL L6(b)

(setq a' (2 5 6 7 8 9 7))
(write-line "Checking the given list")
(print a)

(loop
	(if (> (first a) (second a) )
		(progn
			(write-line "List is not sorted!!")
			(return)
		)
	)
	(if (and (<= ( first a) (second a)) (= (length a) 2 ))
		(progn
			(write-line "List is sorted")
			(return)
		)
	)
	(setq a (rest a))
)
