(module
  (import "env" "adler32" (func (param i32 i32) (result i32)))
  (memory (export "memory") 1)
  (data (i32.const 0) "11223344")
  (func (;0;) (param i32) (result i32)
      (local i32)
    loop  ;; label = @1
      local.get 1
      i32.const 0
      i32.const 4
      call 0
      i32.add
      local.set 1

      ;; loop counter
      local.get 0
      i32.const 1
      i32.sub
      local.tee 0
      br_if 0 (;@1;)
    end
      local.get 1
  )
  (export "adler32" (func 1)))
