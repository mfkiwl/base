! This program is a part of EASIFEM library
! Copyright (C) 2020-2021  Vikas Sharma, Ph.D
!
! This program is free software: you can redistribute it and/or modify
! it under the terms of the GNU General Public License as published by
! the Free Software Foundation, either version 3 of the License, or
! (at your option) any later version.
!
! This program is distributed in the hope that it will be useful,
! but WITHOUT ANY WARRANTY; without even the implied warranty of
! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
! GNU General Public License for more details.
!
! You should have received a copy of the GNU General Public License
! along with this program.  If not, see <https: //www.gnu.org/licenses/>
!

PUBLIC :: OPERATOR(+)

!----------------------------------------------------------------------------
!                                                   Addition@AdditioMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-12
! update: 2021-12-12
! summary: FEVariable = FEVariable + FEVariable

INTERFACE
  MODULE PURE FUNCTION fevar_Addition1(obj1, obj2) RESULT(Ans)
    CLASS(FEVariable_), INTENT(IN) :: obj1
    CLASS(FEVariable_), INTENT(IN) :: obj2
    TYPE(FEVariable_) :: ans
  END FUNCTION fevar_Addition1
END INTERFACE

INTERFACE OPERATOR(+)
  MODULE PROCEDURE fevar_Addition1
END INTERFACE OPERATOR(+)

!----------------------------------------------------------------------------
!                                                   Addition@AdditioMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-12
! update: 2021-12-12
! summary: FEVariable = FEVariable + Real

INTERFACE
  MODULE PURE FUNCTION fevar_Addition2(obj1, val) RESULT(Ans)
    CLASS(FEVariable_), INTENT(IN) :: obj1
    REAL( DFP ), INTENT(IN) :: val
    TYPE(FEVariable_) :: ans
  END FUNCTION fevar_Addition2
END INTERFACE

INTERFACE OPERATOR(+)
  MODULE PROCEDURE fevar_Addition2
END INTERFACE OPERATOR(+)

!----------------------------------------------------------------------------
!                                                   Addition@AdditioMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-12
! update: 2021-12-12
! summary: FEVariable = Real + FEVariable

INTERFACE
  MODULE PURE FUNCTION fevar_Addition3(val, obj1) RESULT(Ans)
    REAL( DFP ), INTENT(IN) :: val
    CLASS(FEVariable_), INTENT(IN) :: obj1
    TYPE(FEVariable_) :: ans
  END FUNCTION fevar_Addition3
END INTERFACE

INTERFACE OPERATOR(+)
  MODULE PROCEDURE fevar_Addition3
END INTERFACE OPERATOR(+)