! -*-f90-*-

!----------------------------------------------------------------!
! The following data is used in mpp_mod and its components       !
!----------------------------------------------------------------!
integer :: stat(MPI_STATUS_SIZE)
real(DOUBLE_KIND), allocatable :: mpp_stack(:)

!--- some dummy variables with dummy values that will never be used
integer, parameter :: ptr_stack = -999
integer, parameter :: status=-999, ptr_status = -999
integer, parameter :: remote_data_loc=-999, ptr_remote = -999
integer, parameter :: sync=-999, ptr_sync = -999
integer, parameter :: mpp_from_pe = -999, ptr_from = -999

!-------------------------------------------------------------------!
! The following data is used in mpp_domains_mod and its components  !
!-------------------------------------------------------------------!
real(DOUBLE_KIND), allocatable :: mpp_domains_stack(:)
real(DOUBLE_KIND), allocatable :: mpp_domains_stack_nonblock(:)
!--- some dummy variables with dummy values that will never be used
integer, parameter :: ptr_domains_stack = -999
integer, parameter :: ptr_domains_stack_nonblock = -999
