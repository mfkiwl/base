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

PUBLIC :: DEALLOCATE
PUBLIC :: NodalVariable

!----------------------------------------------------------------------------
!                                              Deallocate@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Deallocates the content of FEVariable

INTERFACE
  MODULE PURE SUBROUTINE fevar_Deallocate(obj)
    TYPE(FEVariable_), INTENT(INOUT) :: obj
  END SUBROUTINE fevar_Deallocate
END INTERFACE

INTERFACE DEALLOCATE
  MODULE PROCEDURE fevar_Deallocate
END INTERFACE DEALLOCATE

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is scalar, constant

INTERFACE
  MODULE PURE FUNCTION Nodal_Scalar_Constant(val, rank, vartype) &
    & RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val
    CLASS(FEVariableScalar_), INTENT(IN) :: rank
    CLASS(FEVariableConstant_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Scalar_Constant
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Scalar_Constant
END INTERFACE NodalVariable


!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is scalar, Space

INTERFACE
  MODULE PURE FUNCTION Nodal_Scalar_Space(val, rank, vartype) RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:)
    TYPE(FEVariableScalar_), INTENT(IN) :: rank
    TYPE(FEVariableSpace_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Scalar_Space
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Scalar_Space
END INTERFACE NodalVariable

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is scalar, Time

INTERFACE
  MODULE PURE FUNCTION Nodal_Scalar_Time(val, rank, vartype) RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:)
    TYPE(FEVariableScalar_), INTENT(IN) :: rank
    TYPE(FEVariableTime_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Scalar_Time
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Scalar_Time
END INTERFACE NodalVariable

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is scalar, SpaceTime

INTERFACE
  MODULE PURE FUNCTION Nodal_Scalar_SpaceTime(val, rank, vartype) RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:, :)
    TYPE(FEVariableScalar_), INTENT(IN) :: rank
    TYPE(FEVariableSpaceTime_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Scalar_SpaceTime
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Scalar_SpaceTime
END INTERFACE NodalVariable

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------


!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is vector, Constant

INTERFACE
  MODULE PURE FUNCTION Nodal_Vector_Constant(val, rank, vartype) &
    & RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:)
    TYPE(FEVariableVector_), INTENT(IN) :: rank
    TYPE(FEVariableConstant_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Vector_Constant
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Vector_Constant
END INTERFACE NodalVariable

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is vector, Space

INTERFACE
  MODULE PURE FUNCTION Nodal_Vector_Space(val, rank, vartype) RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:, :)
    TYPE(FEVariableVector_), INTENT(IN) :: rank
    TYPE(FEVariableSpace_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Vector_Space
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Vector_Space
END INTERFACE NodalVariable

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is vector, Time

INTERFACE
  MODULE PURE FUNCTION Nodal_Vector_Time(val, rank, vartype) RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:, :)
    TYPE(FEVariableVector_), INTENT(IN) :: rank
    TYPE(FEVariableTime_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Vector_Time
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Vector_Time
END INTERFACE NodalVariable

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------


!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is vector, SpaceTime

INTERFACE
  MODULE PURE FUNCTION Nodal_Vector_SpaceTime(val, rank, vartype) &
    & RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:, :, :)
    TYPE(FEVariableVector_), INTENT(IN) :: rank
    TYPE(FEVariableSpaceTime_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Vector_SpaceTime
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Vector_SpaceTime
END INTERFACE NodalVariable

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is Matrix, Constant

INTERFACE
  MODULE PURE FUNCTION Nodal_Matrix_Constant(val, rank, vartype) &
    & RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:, :)
    TYPE(FEVariableMatrix_), INTENT(IN) :: rank
    TYPE(FEVariableConstant_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Matrix_Constant
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Matrix_Constant
END INTERFACE NodalVariable

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is Matrix, Space

INTERFACE
  MODULE PURE FUNCTION Nodal_Matrix_Space(val, rank, vartype) RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:, :, :)
    TYPE(FEVariableMatrix_), INTENT(IN) :: rank
    TYPE(FEVariableSpace_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Matrix_Space
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Matrix_Space
END INTERFACE NodalVariable

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is Matrix, Time

INTERFACE
  MODULE PURE FUNCTION Nodal_Matrix_Time(val, rank, vartype) RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:, :, :)
    TYPE(FEVariableMatrix_), INTENT(IN) :: rank
    TYPE(FEVariableTime_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Matrix_Time
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Matrix_Time
END INTERFACE NodalVariable

!----------------------------------------------------------------------------
!                                           NodalVariable@ConstructorMethods
!----------------------------------------------------------------------------

!> authors: Vikas Sharma, Ph. D.
! date: 2021-12-10
! update: 2021-12-10
! summary: Create nodal variable, which is Matrix, SpaceTime

INTERFACE
  MODULE PURE FUNCTION Nodal_Matrix_SpaceTime(val, rank, vartype) &
    & RESULT(obj)
    TYPE(FEVariable_) :: obj
    REAL(DFP), INTENT(IN) :: val(:, :, :, :)
    TYPE(FEVariableMatrix_), INTENT(IN) :: rank
    TYPE(FEVariableSpaceTime_), INTENT(IN) :: vartype
  END FUNCTION Nodal_Matrix_SpaceTime
END INTERFACE

INTERFACE NodalVariable
  MODULE PROCEDURE Nodal_Matrix_SpaceTime
END INTERFACE NodalVariable