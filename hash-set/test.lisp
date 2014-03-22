(in-package :hash-set-test)

(def-suite all-tests)

(in-suite all-tests)

(test sanity
  (is (= 2 2)))

(test hs-memberp
  (let ((hash-set (make-instance 'hash-set)))
    (hs-insert hash-set 42)
    (is (hs-memberp hash-set 42))))

(test hs-insert-count
  (let ((hash-set (make-instance 'hash-set)))
    (loop repeat 3 do
         (dotimes (i 10)
           (hs-insert hash-set i)))
    (is (= 10 (hs-count hash-set)))))

(test hs-delete-count
  (let ((hash-set (make-instance 'hash-set)))
    (dotimes (i 100)
      (hs-insert hash-set i))
    (loop for i from 10 below 20 do
         (hs-delete hash-set i))
    (hs-insert hash-set 15)
    (hs-delete hash-set 15)
    (is (= 90 (hs-count hash-set)))))

    
    
    
    
    




      

