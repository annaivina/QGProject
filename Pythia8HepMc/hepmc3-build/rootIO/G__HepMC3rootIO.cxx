// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__HepMC3rootIO
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "include/rootIO_Classes.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *HepMC3cLcLFourVector_Dictionary();
   static void HepMC3cLcLFourVector_TClassManip(TClass*);
   static void *new_HepMC3cLcLFourVector(void *p = nullptr);
   static void *newArray_HepMC3cLcLFourVector(Long_t size, void *p);
   static void delete_HepMC3cLcLFourVector(void *p);
   static void deleteArray_HepMC3cLcLFourVector(void *p);
   static void destruct_HepMC3cLcLFourVector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HepMC3::FourVector*)
   {
      ::HepMC3::FourVector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HepMC3::FourVector));
      static ::ROOT::TGenericClassInfo 
         instance("HepMC3::FourVector", "HepMC3/FourVector.h", 36,
                  typeid(::HepMC3::FourVector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HepMC3cLcLFourVector_Dictionary, isa_proxy, 4,
                  sizeof(::HepMC3::FourVector) );
      instance.SetNew(&new_HepMC3cLcLFourVector);
      instance.SetNewArray(&newArray_HepMC3cLcLFourVector);
      instance.SetDelete(&delete_HepMC3cLcLFourVector);
      instance.SetDeleteArray(&deleteArray_HepMC3cLcLFourVector);
      instance.SetDestructor(&destruct_HepMC3cLcLFourVector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HepMC3::FourVector*)
   {
      return GenerateInitInstanceLocal(static_cast<::HepMC3::FourVector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HepMC3::FourVector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HepMC3cLcLFourVector_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::HepMC3::FourVector*>(nullptr))->GetClass();
      HepMC3cLcLFourVector_TClassManip(theClass);
   return theClass;
   }

   static void HepMC3cLcLFourVector_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HepMC3cLcLGenParticleData_Dictionary();
   static void HepMC3cLcLGenParticleData_TClassManip(TClass*);
   static void *new_HepMC3cLcLGenParticleData(void *p = nullptr);
   static void *newArray_HepMC3cLcLGenParticleData(Long_t size, void *p);
   static void delete_HepMC3cLcLGenParticleData(void *p);
   static void deleteArray_HepMC3cLcLGenParticleData(void *p);
   static void destruct_HepMC3cLcLGenParticleData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HepMC3::GenParticleData*)
   {
      ::HepMC3::GenParticleData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HepMC3::GenParticleData));
      static ::ROOT::TGenericClassInfo 
         instance("HepMC3::GenParticleData", "HepMC3/Data/GenParticleData.h", 24,
                  typeid(::HepMC3::GenParticleData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HepMC3cLcLGenParticleData_Dictionary, isa_proxy, 4,
                  sizeof(::HepMC3::GenParticleData) );
      instance.SetNew(&new_HepMC3cLcLGenParticleData);
      instance.SetNewArray(&newArray_HepMC3cLcLGenParticleData);
      instance.SetDelete(&delete_HepMC3cLcLGenParticleData);
      instance.SetDeleteArray(&deleteArray_HepMC3cLcLGenParticleData);
      instance.SetDestructor(&destruct_HepMC3cLcLGenParticleData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HepMC3::GenParticleData*)
   {
      return GenerateInitInstanceLocal(static_cast<::HepMC3::GenParticleData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HepMC3::GenParticleData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HepMC3cLcLGenParticleData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::HepMC3::GenParticleData*>(nullptr))->GetClass();
      HepMC3cLcLGenParticleData_TClassManip(theClass);
   return theClass;
   }

   static void HepMC3cLcLGenParticleData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HepMC3cLcLGenVertexData_Dictionary();
   static void HepMC3cLcLGenVertexData_TClassManip(TClass*);
   static void *new_HepMC3cLcLGenVertexData(void *p = nullptr);
   static void *newArray_HepMC3cLcLGenVertexData(Long_t size, void *p);
   static void delete_HepMC3cLcLGenVertexData(void *p);
   static void deleteArray_HepMC3cLcLGenVertexData(void *p);
   static void destruct_HepMC3cLcLGenVertexData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HepMC3::GenVertexData*)
   {
      ::HepMC3::GenVertexData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HepMC3::GenVertexData));
      static ::ROOT::TGenericClassInfo 
         instance("HepMC3::GenVertexData", "HepMC3/Data/GenVertexData.h", 22,
                  typeid(::HepMC3::GenVertexData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HepMC3cLcLGenVertexData_Dictionary, isa_proxy, 4,
                  sizeof(::HepMC3::GenVertexData) );
      instance.SetNew(&new_HepMC3cLcLGenVertexData);
      instance.SetNewArray(&newArray_HepMC3cLcLGenVertexData);
      instance.SetDelete(&delete_HepMC3cLcLGenVertexData);
      instance.SetDeleteArray(&deleteArray_HepMC3cLcLGenVertexData);
      instance.SetDestructor(&destruct_HepMC3cLcLGenVertexData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HepMC3::GenVertexData*)
   {
      return GenerateInitInstanceLocal(static_cast<::HepMC3::GenVertexData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HepMC3::GenVertexData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HepMC3cLcLGenVertexData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::HepMC3::GenVertexData*>(nullptr))->GetClass();
      HepMC3cLcLGenVertexData_TClassManip(theClass);
   return theClass;
   }

   static void HepMC3cLcLGenVertexData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HepMC3cLcLSetup_Dictionary();
   static void HepMC3cLcLSetup_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HepMC3::Setup*)
   {
      ::HepMC3::Setup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HepMC3::Setup));
      static ::ROOT::TGenericClassInfo 
         instance("HepMC3::Setup", "HepMC3/Setup.h", 22,
                  typeid(::HepMC3::Setup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HepMC3cLcLSetup_Dictionary, isa_proxy, 4,
                  sizeof(::HepMC3::Setup) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HepMC3::Setup*)
   {
      return GenerateInitInstanceLocal(static_cast<::HepMC3::Setup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HepMC3::Setup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HepMC3cLcLSetup_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::HepMC3::Setup*>(nullptr))->GetClass();
      HepMC3cLcLSetup_TClassManip(theClass);
   return theClass;
   }

   static void HepMC3cLcLSetup_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HepMC3cLcLUnits_Dictionary();
   static void HepMC3cLcLUnits_TClassManip(TClass*);
   static void *new_HepMC3cLcLUnits(void *p = nullptr);
   static void *newArray_HepMC3cLcLUnits(Long_t size, void *p);
   static void delete_HepMC3cLcLUnits(void *p);
   static void deleteArray_HepMC3cLcLUnits(void *p);
   static void destruct_HepMC3cLcLUnits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HepMC3::Units*)
   {
      ::HepMC3::Units *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HepMC3::Units));
      static ::ROOT::TGenericClassInfo 
         instance("HepMC3::Units", "HepMC3/Units.h", 26,
                  typeid(::HepMC3::Units), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HepMC3cLcLUnits_Dictionary, isa_proxy, 4,
                  sizeof(::HepMC3::Units) );
      instance.SetNew(&new_HepMC3cLcLUnits);
      instance.SetNewArray(&newArray_HepMC3cLcLUnits);
      instance.SetDelete(&delete_HepMC3cLcLUnits);
      instance.SetDeleteArray(&deleteArray_HepMC3cLcLUnits);
      instance.SetDestructor(&destruct_HepMC3cLcLUnits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HepMC3::Units*)
   {
      return GenerateInitInstanceLocal(static_cast<::HepMC3::Units*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HepMC3::Units*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HepMC3cLcLUnits_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::HepMC3::Units*>(nullptr))->GetClass();
      HepMC3cLcLUnits_TClassManip(theClass);
   return theClass;
   }

   static void HepMC3cLcLUnits_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HepMC3cLcLGenEventData_Dictionary();
   static void HepMC3cLcLGenEventData_TClassManip(TClass*);
   static void *new_HepMC3cLcLGenEventData(void *p = nullptr);
   static void *newArray_HepMC3cLcLGenEventData(Long_t size, void *p);
   static void delete_HepMC3cLcLGenEventData(void *p);
   static void deleteArray_HepMC3cLcLGenEventData(void *p);
   static void destruct_HepMC3cLcLGenEventData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HepMC3::GenEventData*)
   {
      ::HepMC3::GenEventData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HepMC3::GenEventData));
      static ::ROOT::TGenericClassInfo 
         instance("HepMC3::GenEventData", "HepMC3/Data/GenEventData.h", 26,
                  typeid(::HepMC3::GenEventData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HepMC3cLcLGenEventData_Dictionary, isa_proxy, 4,
                  sizeof(::HepMC3::GenEventData) );
      instance.SetNew(&new_HepMC3cLcLGenEventData);
      instance.SetNewArray(&newArray_HepMC3cLcLGenEventData);
      instance.SetDelete(&delete_HepMC3cLcLGenEventData);
      instance.SetDeleteArray(&deleteArray_HepMC3cLcLGenEventData);
      instance.SetDestructor(&destruct_HepMC3cLcLGenEventData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HepMC3::GenEventData*)
   {
      return GenerateInitInstanceLocal(static_cast<::HepMC3::GenEventData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HepMC3::GenEventData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HepMC3cLcLGenEventData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::HepMC3::GenEventData*>(nullptr))->GetClass();
      HepMC3cLcLGenEventData_TClassManip(theClass);
   return theClass;
   }

   static void HepMC3cLcLGenEventData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HepMC3cLcLGenRunInfoData_Dictionary();
   static void HepMC3cLcLGenRunInfoData_TClassManip(TClass*);
   static void *new_HepMC3cLcLGenRunInfoData(void *p = nullptr);
   static void *newArray_HepMC3cLcLGenRunInfoData(Long_t size, void *p);
   static void delete_HepMC3cLcLGenRunInfoData(void *p);
   static void deleteArray_HepMC3cLcLGenRunInfoData(void *p);
   static void destruct_HepMC3cLcLGenRunInfoData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HepMC3::GenRunInfoData*)
   {
      ::HepMC3::GenRunInfoData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HepMC3::GenRunInfoData));
      static ::ROOT::TGenericClassInfo 
         instance("HepMC3::GenRunInfoData", "HepMC3/Data/GenRunInfoData.h", 23,
                  typeid(::HepMC3::GenRunInfoData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HepMC3cLcLGenRunInfoData_Dictionary, isa_proxy, 4,
                  sizeof(::HepMC3::GenRunInfoData) );
      instance.SetNew(&new_HepMC3cLcLGenRunInfoData);
      instance.SetNewArray(&newArray_HepMC3cLcLGenRunInfoData);
      instance.SetDelete(&delete_HepMC3cLcLGenRunInfoData);
      instance.SetDeleteArray(&deleteArray_HepMC3cLcLGenRunInfoData);
      instance.SetDestructor(&destruct_HepMC3cLcLGenRunInfoData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HepMC3::GenRunInfoData*)
   {
      return GenerateInitInstanceLocal(static_cast<::HepMC3::GenRunInfoData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HepMC3::GenRunInfoData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HepMC3cLcLGenRunInfoData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::HepMC3::GenRunInfoData*>(nullptr))->GetClass();
      HepMC3cLcLGenRunInfoData_TClassManip(theClass);
   return theClass;
   }

   static void HepMC3cLcLGenRunInfoData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_HepMC3cLcLFourVector(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::FourVector : new ::HepMC3::FourVector;
   }
   static void *newArray_HepMC3cLcLFourVector(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::FourVector[nElements] : new ::HepMC3::FourVector[nElements];
   }
   // Wrapper around operator delete
   static void delete_HepMC3cLcLFourVector(void *p) {
      delete (static_cast<::HepMC3::FourVector*>(p));
   }
   static void deleteArray_HepMC3cLcLFourVector(void *p) {
      delete [] (static_cast<::HepMC3::FourVector*>(p));
   }
   static void destruct_HepMC3cLcLFourVector(void *p) {
      typedef ::HepMC3::FourVector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HepMC3::FourVector

namespace ROOT {
   // Wrappers around operator new
   static void *new_HepMC3cLcLGenParticleData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::GenParticleData : new ::HepMC3::GenParticleData;
   }
   static void *newArray_HepMC3cLcLGenParticleData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::GenParticleData[nElements] : new ::HepMC3::GenParticleData[nElements];
   }
   // Wrapper around operator delete
   static void delete_HepMC3cLcLGenParticleData(void *p) {
      delete (static_cast<::HepMC3::GenParticleData*>(p));
   }
   static void deleteArray_HepMC3cLcLGenParticleData(void *p) {
      delete [] (static_cast<::HepMC3::GenParticleData*>(p));
   }
   static void destruct_HepMC3cLcLGenParticleData(void *p) {
      typedef ::HepMC3::GenParticleData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HepMC3::GenParticleData

namespace ROOT {
   // Wrappers around operator new
   static void *new_HepMC3cLcLGenVertexData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::GenVertexData : new ::HepMC3::GenVertexData;
   }
   static void *newArray_HepMC3cLcLGenVertexData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::GenVertexData[nElements] : new ::HepMC3::GenVertexData[nElements];
   }
   // Wrapper around operator delete
   static void delete_HepMC3cLcLGenVertexData(void *p) {
      delete (static_cast<::HepMC3::GenVertexData*>(p));
   }
   static void deleteArray_HepMC3cLcLGenVertexData(void *p) {
      delete [] (static_cast<::HepMC3::GenVertexData*>(p));
   }
   static void destruct_HepMC3cLcLGenVertexData(void *p) {
      typedef ::HepMC3::GenVertexData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HepMC3::GenVertexData

namespace ROOT {
} // end of namespace ROOT for class ::HepMC3::Setup

namespace ROOT {
   // Wrappers around operator new
   static void *new_HepMC3cLcLUnits(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::Units : new ::HepMC3::Units;
   }
   static void *newArray_HepMC3cLcLUnits(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::Units[nElements] : new ::HepMC3::Units[nElements];
   }
   // Wrapper around operator delete
   static void delete_HepMC3cLcLUnits(void *p) {
      delete (static_cast<::HepMC3::Units*>(p));
   }
   static void deleteArray_HepMC3cLcLUnits(void *p) {
      delete [] (static_cast<::HepMC3::Units*>(p));
   }
   static void destruct_HepMC3cLcLUnits(void *p) {
      typedef ::HepMC3::Units current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HepMC3::Units

namespace ROOT {
   // Wrappers around operator new
   static void *new_HepMC3cLcLGenEventData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::GenEventData : new ::HepMC3::GenEventData;
   }
   static void *newArray_HepMC3cLcLGenEventData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::GenEventData[nElements] : new ::HepMC3::GenEventData[nElements];
   }
   // Wrapper around operator delete
   static void delete_HepMC3cLcLGenEventData(void *p) {
      delete (static_cast<::HepMC3::GenEventData*>(p));
   }
   static void deleteArray_HepMC3cLcLGenEventData(void *p) {
      delete [] (static_cast<::HepMC3::GenEventData*>(p));
   }
   static void destruct_HepMC3cLcLGenEventData(void *p) {
      typedef ::HepMC3::GenEventData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HepMC3::GenEventData

namespace ROOT {
   // Wrappers around operator new
   static void *new_HepMC3cLcLGenRunInfoData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::GenRunInfoData : new ::HepMC3::GenRunInfoData;
   }
   static void *newArray_HepMC3cLcLGenRunInfoData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HepMC3::GenRunInfoData[nElements] : new ::HepMC3::GenRunInfoData[nElements];
   }
   // Wrapper around operator delete
   static void delete_HepMC3cLcLGenRunInfoData(void *p) {
      delete (static_cast<::HepMC3::GenRunInfoData*>(p));
   }
   static void deleteArray_HepMC3cLcLGenRunInfoData(void *p) {
      delete [] (static_cast<::HepMC3::GenRunInfoData*>(p));
   }
   static void destruct_HepMC3cLcLGenRunInfoData(void *p) {
      typedef ::HepMC3::GenRunInfoData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HepMC3::GenRunInfoData

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = nullptr);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 389,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      ::ROOT::AddClassAlternate("vector<string>","std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr))->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete (static_cast<vector<string>*>(p));
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] (static_cast<vector<string>*>(p));
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 389,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 389,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEHepMC3cLcLGenVertexDatagR_Dictionary();
   static void vectorlEHepMC3cLcLGenVertexDatagR_TClassManip(TClass*);
   static void *new_vectorlEHepMC3cLcLGenVertexDatagR(void *p = nullptr);
   static void *newArray_vectorlEHepMC3cLcLGenVertexDatagR(Long_t size, void *p);
   static void delete_vectorlEHepMC3cLcLGenVertexDatagR(void *p);
   static void deleteArray_vectorlEHepMC3cLcLGenVertexDatagR(void *p);
   static void destruct_vectorlEHepMC3cLcLGenVertexDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<HepMC3::GenVertexData>*)
   {
      vector<HepMC3::GenVertexData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<HepMC3::GenVertexData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<HepMC3::GenVertexData>", -2, "vector", 389,
                  typeid(vector<HepMC3::GenVertexData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEHepMC3cLcLGenVertexDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<HepMC3::GenVertexData>) );
      instance.SetNew(&new_vectorlEHepMC3cLcLGenVertexDatagR);
      instance.SetNewArray(&newArray_vectorlEHepMC3cLcLGenVertexDatagR);
      instance.SetDelete(&delete_vectorlEHepMC3cLcLGenVertexDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEHepMC3cLcLGenVertexDatagR);
      instance.SetDestructor(&destruct_vectorlEHepMC3cLcLGenVertexDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<HepMC3::GenVertexData> >()));

      ::ROOT::AddClassAlternate("vector<HepMC3::GenVertexData>","std::vector<HepMC3::GenVertexData, std::allocator<HepMC3::GenVertexData> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<HepMC3::GenVertexData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEHepMC3cLcLGenVertexDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<HepMC3::GenVertexData>*>(nullptr))->GetClass();
      vectorlEHepMC3cLcLGenVertexDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEHepMC3cLcLGenVertexDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEHepMC3cLcLGenVertexDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<HepMC3::GenVertexData> : new vector<HepMC3::GenVertexData>;
   }
   static void *newArray_vectorlEHepMC3cLcLGenVertexDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<HepMC3::GenVertexData>[nElements] : new vector<HepMC3::GenVertexData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEHepMC3cLcLGenVertexDatagR(void *p) {
      delete (static_cast<vector<HepMC3::GenVertexData>*>(p));
   }
   static void deleteArray_vectorlEHepMC3cLcLGenVertexDatagR(void *p) {
      delete [] (static_cast<vector<HepMC3::GenVertexData>*>(p));
   }
   static void destruct_vectorlEHepMC3cLcLGenVertexDatagR(void *p) {
      typedef vector<HepMC3::GenVertexData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<HepMC3::GenVertexData>

namespace ROOT {
   static TClass *vectorlEHepMC3cLcLGenParticleDatagR_Dictionary();
   static void vectorlEHepMC3cLcLGenParticleDatagR_TClassManip(TClass*);
   static void *new_vectorlEHepMC3cLcLGenParticleDatagR(void *p = nullptr);
   static void *newArray_vectorlEHepMC3cLcLGenParticleDatagR(Long_t size, void *p);
   static void delete_vectorlEHepMC3cLcLGenParticleDatagR(void *p);
   static void deleteArray_vectorlEHepMC3cLcLGenParticleDatagR(void *p);
   static void destruct_vectorlEHepMC3cLcLGenParticleDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<HepMC3::GenParticleData>*)
   {
      vector<HepMC3::GenParticleData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<HepMC3::GenParticleData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<HepMC3::GenParticleData>", -2, "vector", 389,
                  typeid(vector<HepMC3::GenParticleData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEHepMC3cLcLGenParticleDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<HepMC3::GenParticleData>) );
      instance.SetNew(&new_vectorlEHepMC3cLcLGenParticleDatagR);
      instance.SetNewArray(&newArray_vectorlEHepMC3cLcLGenParticleDatagR);
      instance.SetDelete(&delete_vectorlEHepMC3cLcLGenParticleDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEHepMC3cLcLGenParticleDatagR);
      instance.SetDestructor(&destruct_vectorlEHepMC3cLcLGenParticleDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<HepMC3::GenParticleData> >()));

      ::ROOT::AddClassAlternate("vector<HepMC3::GenParticleData>","std::vector<HepMC3::GenParticleData, std::allocator<HepMC3::GenParticleData> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<HepMC3::GenParticleData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEHepMC3cLcLGenParticleDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<HepMC3::GenParticleData>*>(nullptr))->GetClass();
      vectorlEHepMC3cLcLGenParticleDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEHepMC3cLcLGenParticleDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEHepMC3cLcLGenParticleDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<HepMC3::GenParticleData> : new vector<HepMC3::GenParticleData>;
   }
   static void *newArray_vectorlEHepMC3cLcLGenParticleDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<HepMC3::GenParticleData>[nElements] : new vector<HepMC3::GenParticleData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEHepMC3cLcLGenParticleDatagR(void *p) {
      delete (static_cast<vector<HepMC3::GenParticleData>*>(p));
   }
   static void deleteArray_vectorlEHepMC3cLcLGenParticleDatagR(void *p) {
      delete [] (static_cast<vector<HepMC3::GenParticleData>*>(p));
   }
   static void destruct_vectorlEHepMC3cLcLGenParticleDatagR(void *p) {
      typedef vector<HepMC3::GenParticleData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<HepMC3::GenParticleData>

namespace {
  void TriggerDictionaryInitialization_libHepMC3rootIO_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/HepMC3/include",
"/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/HepMC3/rootIO/include",
"/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/HepMC3/rootIO",
"/cvmfs/sft.cern.ch/lcg/releases/ROOT/6.28.04-740f6/x86_64-el9-gcc11-opt/include/",
"/storage/agrp/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/rootIO/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libHepMC3rootIO dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace HepMC3{struct __attribute__((annotate("$clingAutoload$HepMC3/Data/GenParticleData.h")))  __attribute__((annotate("$clingAutoload$HepMC3/Data/GenEventData.h")))  GenParticleData;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace HepMC3{struct __attribute__((annotate("$clingAutoload$HepMC3/Data/GenVertexData.h")))  __attribute__((annotate("$clingAutoload$HepMC3/Data/GenEventData.h")))  GenVertexData;}
namespace std{template <class _CharT> struct __attribute__((annotate("$clingAutoload$bits/char_traits.h")))  __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
namespace HepMC3{class __attribute__((annotate("$clingAutoload$HepMC3/FourVector.h")))  __attribute__((annotate("$clingAutoload$HepMC3/Data/GenEventData.h")))  FourVector;}
namespace HepMC3{class __attribute__((annotate("$clingAutoload$HepMC3/Setup.h")))  __attribute__((annotate("$clingAutoload$HepMC3/Data/GenEventData.h")))  Setup;}
namespace HepMC3{class __attribute__((annotate("$clingAutoload$HepMC3/Units.h")))  __attribute__((annotate("$clingAutoload$HepMC3/Data/GenEventData.h")))  Units;}
namespace HepMC3{struct __attribute__((annotate("$clingAutoload$HepMC3/Data/GenEventData.h")))  GenEventData;}
namespace HepMC3{struct __attribute__((annotate("$clingAutoload$HepMC3/Data/GenRunInfoData.h")))  GenRunInfoData;}
namespace HepMC{typedef HepMC3::GenEventData GenEventData;}
namespace HepMC{typedef HepMC3::GenRunInfoData GenRunInfoData;}
namespace HepMC{typedef HepMC3::GenParticleData GenParticleData;}
namespace HepMC{typedef HepMC3::GenVertexData GenVertexData;}
namespace HepMC{typedef HepMC3::FourVector FourVector;}
namespace HepMC{typedef HepMC3::Units Units;}
namespace HepMC{typedef HepMC3::Setup Setup;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libHepMC3rootIO dictionary payload"

#ifndef HEPMC3_ROOTIO
  #define HEPMC3_ROOTIO 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "HepMC3/Data/GenEventData.h"
#include "HepMC3/Data/GenRunInfoData.h"
/* To generate dictionaries for compatibility with HepMC3.0*/
namespace HepMC
{
typedef HepMC3::GenEventData GenEventData;
typedef HepMC3::GenRunInfoData GenRunInfoData ;
typedef HepMC3::GenParticleData GenParticleData ;
typedef HepMC3::GenVertexData GenVertexData ;
typedef HepMC3::FourVector FourVector ;
typedef HepMC3::Units Units ;
typedef HepMC3::Setup Setup ;
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"HepMC3::FourVector", payloadCode, "@",
"HepMC3::GenEventData", payloadCode, "@",
"HepMC3::GenParticleData", payloadCode, "@",
"HepMC3::GenRunInfoData", payloadCode, "@",
"HepMC3::GenVertexData", payloadCode, "@",
"HepMC3::Setup", payloadCode, "@",
"HepMC3::Units", payloadCode, "@",
"HepMC::FourVector", payloadCode, "@",
"HepMC::GenEventData", payloadCode, "@",
"HepMC::GenParticleData", payloadCode, "@",
"HepMC::GenRunInfoData", payloadCode, "@",
"HepMC::GenVertexData", payloadCode, "@",
"HepMC::Setup", payloadCode, "@",
"HepMC::Units", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libHepMC3rootIO",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libHepMC3rootIO_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libHepMC3rootIO_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libHepMC3rootIO() {
  TriggerDictionaryInitialization_libHepMC3rootIO_Impl();
}
