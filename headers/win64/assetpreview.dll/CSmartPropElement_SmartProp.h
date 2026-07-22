#pragma once

class CSmartPropElement_SmartProp : public CSmartPropElement /*0x0*/  // sizeof 0x170, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataOutlinerAssetNameExpr}
{
public:
    char _pad_0000[0x88]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCSmartProp > > m_sSmartProp; // offset 0x88, size 0xE0, align 8 | MPropertyDescription
    bool m_bLocalEvaluationState; // offset 0x168, size 0x1, align 1 | MPropertyDescription
    char _pad_0169[0x7]; // offset 0x169
};
