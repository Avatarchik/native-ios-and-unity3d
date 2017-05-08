#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen2110227463.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase828812576.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_Type1303803226.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall2229564840.h"
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen266204305.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen2727799310.h"
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen883776152.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen1372135904.h"
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_gen3799696166.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen3149477088.h"
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_gen2191335654.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen2935245934.h"
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_gen2955480072.h"

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t2110227463;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t828812576;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2229564840;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2727799310;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t1372135904;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t3149477088;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2935245934;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_1__ctor_m2948712401_MetadataUsageId;
extern Il2CppClass* TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m4083384818_MetadataUsageId;
extern const uint32_t UnityEvent_1__ctor_m2073978020_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m2223850067_MetadataUsageId;
extern const uint32_t UnityEvent_2__ctor_m3717034779_MetadataUsageId;
extern const uint32_t UnityEvent_2_FindMethod_Impl_m2783251718_MetadataUsageId;
extern const uint32_t UnityEvent_3__ctor_m3502631330_MetadataUsageId;
extern const uint32_t UnityEvent_3_FindMethod_Impl_m1889846153_MetadataUsageId;
extern const uint32_t UnityEvent_4__ctor_m3102731553_MetadataUsageId;
extern const uint32_t UnityEvent_4_FindMethod_Impl_m4079512420_MetadataUsageId;

// System.Object[]
struct ObjectU5BU5D_t3614634134  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Il2CppObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t1664964607  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C"  void UnityEventBase__ctor_m4062111756 (UnityEventBase_t828812576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m432505302 (Il2CppObject * __this /* static, unused */, RuntimeTypeHandle_t2330101084  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C"  MethodInfo_t * UnityEventBase_GetValidMethodInfo_m1834951552 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t1664964607* ___argumentTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C"  void UnityEventBase_Invoke_m2706435282 (UnityEventBase_t828812576 * __this, ObjectU5BU5D_t3614634134* ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C"  void UnityEvent_1__ctor_m2948712401_gshared (UnityEvent_1_t2110227463 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1__ctor_m2948712401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)1)));
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t828812576 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m4083384818_gshared (UnityEvent_1_t2110227463 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m4083384818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t1664964607* L_2 = (TypeU5BU5D_t1664964607*)((TypeU5BU5D_t1664964607*)SZArrayNew(TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var, (uint32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_3);
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m1834951552(NULL /*static, unused*/, (Il2CppObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t1664964607*)L_2, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_4;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m3311025800_gshared (UnityEvent_1_t2110227463 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method)
{
	BaseInvokableCall_t2229564840 * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t266204305 * L_2 = (InvokableCall_1_t266204305 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1));
		((  void (*) (InvokableCall_1_t266204305 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)(L_2, (Il2CppObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		V_0 = (BaseInvokableCall_t2229564840 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2229564840 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m1903741765_gshared (UnityEvent_1_t2110227463 * __this, int32_t ___arg00, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t3614634134* L_0 = (ObjectU5BU5D_t3614634134*)__this->get_m_InvokeArray_4();
		int32_t L_1 = ___arg00;
		int32_t L_2 = L_1;
		Il2CppObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_3);
		ObjectU5BU5D_t3614634134* L_4 = (ObjectU5BU5D_t3614634134*)__this->get_m_InvokeArray_4();
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase_Invoke_m2706435282((UnityEventBase_t828812576 *)__this, (ObjectU5BU5D_t3614634134*)L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C"  void UnityEvent_1__ctor_m2073978020_gshared (UnityEvent_1_t2727799310 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1__ctor_m2073978020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)1)));
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t828812576 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2223850067_gshared (UnityEvent_1_t2727799310 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2223850067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t1664964607* L_2 = (TypeU5BU5D_t1664964607*)((TypeU5BU5D_t1664964607*)SZArrayNew(TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var, (uint32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_3);
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m1834951552(NULL /*static, unused*/, (Il2CppObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t1664964607*)L_2, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_4;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m669290055_gshared (UnityEvent_1_t2727799310 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method)
{
	BaseInvokableCall_t2229564840 * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t883776152 * L_2 = (InvokableCall_1_t883776152 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1));
		((  void (*) (InvokableCall_1_t883776152 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)(L_2, (Il2CppObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		V_0 = (BaseInvokableCall_t2229564840 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2229564840 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m838874366_gshared (UnityEvent_1_t2727799310 * __this, Il2CppObject * ___arg00, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t3614634134* L_0 = (ObjectU5BU5D_t3614634134*)__this->get_m_InvokeArray_4();
		Il2CppObject * L_1 = ___arg00;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_1);
		ObjectU5BU5D_t3614634134* L_2 = (ObjectU5BU5D_t3614634134*)__this->get_m_InvokeArray_4();
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase_Invoke_m2706435282((UnityEventBase_t828812576 *)__this, (ObjectU5BU5D_t3614634134*)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_2__ctor_m3717034779_gshared (UnityEvent_2_t1372135904 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2__ctor_m3717034779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)2)));
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t828812576 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_2_FindMethod_Impl_m2783251718_gshared (UnityEvent_2_t1372135904 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m2783251718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t1664964607* L_2 = (TypeU5BU5D_t1664964607*)((TypeU5BU5D_t1664964607*)SZArrayNew(TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var, (uint32_t)2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_3);
		TypeU5BU5D_t1664964607* L_4 = (TypeU5BU5D_t1664964607*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m1834951552(NULL /*static, unused*/, (Il2CppObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t1664964607*)L_4, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_2_GetDelegate_m2147273130_gshared (UnityEvent_2_t1372135904 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method)
{
	BaseInvokableCall_t2229564840 * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t3799696166 * L_2 = (InvokableCall_2_t3799696166 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t3799696166 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)(L_2, (Il2CppObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		V_0 = (BaseInvokableCall_t2229564840 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2229564840 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_3__ctor_m3502631330_gshared (UnityEvent_3_t3149477088 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3__ctor_m3502631330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)3)));
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t828812576 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_3_FindMethod_Impl_m1889846153_gshared (UnityEvent_3_t3149477088 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_m1889846153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t1664964607* L_2 = (TypeU5BU5D_t1664964607*)((TypeU5BU5D_t1664964607*)SZArrayNew(TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var, (uint32_t)3));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_3);
		TypeU5BU5D_t1664964607* L_4 = (TypeU5BU5D_t1664964607*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_5);
		TypeU5BU5D_t1664964607* L_6 = (TypeU5BU5D_t1664964607*)L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_7);
		MethodInfo_t * L_8 = UnityEventBase_GetValidMethodInfo_m1834951552(NULL /*static, unused*/, (Il2CppObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t1664964607*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_8;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_3_GetDelegate_m338681277_gshared (UnityEvent_3_t3149477088 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method)
{
	BaseInvokableCall_t2229564840 * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t2191335654 * L_2 = (InvokableCall_3_t2191335654 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t2191335654 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)(L_2, (Il2CppObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2229564840 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2229564840 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_4__ctor_m3102731553_gshared (UnityEvent_4_t2935245934 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4__ctor_m3102731553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4)));
		NullCheck((UnityEventBase_t828812576 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t828812576 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_4_FindMethod_Impl_m4079512420_gshared (UnityEvent_4_t2935245934 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m4079512420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t1664964607* L_2 = (TypeU5BU5D_t1664964607*)((TypeU5BU5D_t1664964607*)SZArrayNew(TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var, (uint32_t)4));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_3);
		TypeU5BU5D_t1664964607* L_4 = (TypeU5BU5D_t1664964607*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_5);
		TypeU5BU5D_t1664964607* L_6 = (TypeU5BU5D_t1664964607*)L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_7);
		TypeU5BU5D_t1664964607* L_8 = (TypeU5BU5D_t1664964607*)L_6;
		Type_t * L_9 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 3)), /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_9);
		MethodInfo_t * L_10 = UnityEventBase_GetValidMethodInfo_m1834951552(NULL /*static, unused*/, (Il2CppObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t1664964607*)L_8, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_10;
		goto IL_0048;
	}

IL_0048:
	{
		MethodInfo_t * L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_4_GetDelegate_m2704961864_gshared (UnityEvent_4_t2935245934 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method)
{
	BaseInvokableCall_t2229564840 * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t2955480072 * L_2 = (InvokableCall_4_t2955480072 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t2955480072 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->methodPointer)(L_2, (Il2CppObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2229564840 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2229564840 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
