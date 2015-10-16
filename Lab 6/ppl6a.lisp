; Name		     : Yash Kumar Singh
; Roll Number  	 : 1310110373
; Major		     : Computer Science and Engineering
; Program Title	 : Linear Search PPL L6(a)


(setq a' (4 5 7 6 9 8 0 1 2 3 10))
(LET val)
(write-line "Enter value to be searched: ")
(setq key (READ))
(setq counter 1)

(loop
	(if (= (first a) key)
		(progn
			(write-line "Value found at position: ")
			(write counter)
			(return)
		)
	)
	(if (= (length a) 1)
		(progn
			(write-line "Value not found in the given list!!")
			(return)
		)
	)
	(setq a (rest a))
	(setq counter (+ counter 1))
)
