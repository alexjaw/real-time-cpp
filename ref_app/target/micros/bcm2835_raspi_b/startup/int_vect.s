
.section .intvect, "ax"
  b __my_startup
  b __int_vect_undef_instr_handler
  b __int_vect_sw_interrupt_handler
  b __int_vect_prefetch_abort_handler
  b __int_vect_data_abort_handler
  b __int_vect_unused_05_handler
  b __int_vect_irq_handler
  b __int_vect_fiq_handler