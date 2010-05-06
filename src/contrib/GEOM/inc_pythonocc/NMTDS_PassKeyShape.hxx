//  Copyright (C) 2007-2008  CEA/DEN, EDF R&D, OPEN CASCADE
//
//  Copyright (C) 2003-2007  OPEN CASCADE, EADS/CCR, LIP6, CEA/DEN,
//  CEDRAT, EDF R&D, LEG, PRINCIPIA R&D, BUREAU VERITAS
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
//
//  See http://www.salome-platform.org/ or email : webmaster.salome@opencascade.com
//
#ifndef _NMTDS_PassKeyShape_HeaderFile
#define _NMTDS_PassKeyShape_HeaderFile

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopTools_IndexedMapOfShape_HeaderFile
#include <TopTools_IndexedMapOfShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Shape;
class TopTools_ListOfShape;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class NMTDS_PassKeyShape  {

public:

    void* operator new(size_t,void* anAddress) 
      {
        return anAddress;
      }
    void* operator new(size_t size) 
      { 
        return Standard::Allocate(size); 
      }
    void  operator delete(void *anAddress) 
      { 
        if (anAddress) Standard::Free((Standard_Address&)anAddress); 
      }
 // Methods PUBLIC
 // 


Standard_EXPORT NMTDS_PassKeyShape();
Standard_EXPORT virtual ~NMTDS_PassKeyShape();


Standard_EXPORT NMTDS_PassKeyShape(const NMTDS_PassKeyShape& Other);


Standard_EXPORT   NMTDS_PassKeyShape& Assign(const NMTDS_PassKeyShape& Other) ;
  NMTDS_PassKeyShape& operator =(const NMTDS_PassKeyShape& Other) 
{
  return Assign(Other);
}



Standard_EXPORT   void SetShapes(const TopoDS_Shape& aS) ;


Standard_EXPORT   void SetShapes(const TopoDS_Shape& aS1,const TopoDS_Shape& aS2) ;


Standard_EXPORT   void SetShapes(const TopoDS_Shape& aS1,const TopoDS_Shape& aS2,const TopoDS_Shape& aS3) ;


Standard_EXPORT   void SetShapes(const TopoDS_Shape& aS1,const TopoDS_Shape& aS2,const TopoDS_Shape& aS3,const TopoDS_Shape& aS4) ;


Standard_EXPORT   void SetShapes(const TopTools_ListOfShape& aLS) ;


Standard_EXPORT   void Clear() ;


Standard_EXPORT   Standard_Integer NbIds() const;


Standard_EXPORT   Standard_Boolean IsEqual(const NMTDS_PassKeyShape& aOther) const;


Standard_EXPORT   Standard_Integer HashCode(const Standard_Integer Upper) const;


Standard_EXPORT   void Dump(const Standard_Integer aHex = 0) const;





protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //
Standard_Integer myNbIds;
Standard_Integer mySum;
Standard_Integer myUpper;
TopTools_IndexedMapOfShape myMap;


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
