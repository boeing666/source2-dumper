#pragma once

class CAnimGraphDoc_HitReactNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xE0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    float32 m_flMinDelayBetweenHits; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_004C[0x4]; // offset 0x4C
    CUtlString m_triggerParamName; // offset 0x50, size 0x8, align 8 | MPropertySuppressField
    CUtlString m_hitBoneParamName; // offset 0x58, size 0x8, align 8 | MPropertySuppressField
    CUtlString m_hitOffsetParamName; // offset 0x60, size 0x8, align 8 | MPropertySuppressField
    CUtlString m_hitDirectionParamName; // offset 0x68, size 0x8, align 8 | MPropertySuppressField
    CUtlString m_hitStrengthParamName; // offset 0x70, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_triggerParam; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_hitBoneParam; // offset 0x7C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_hitOffsetParam; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_hitDirectionParam; // offset 0x84, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_hitStrengthParam; // offset 0x88, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_008C[0x4]; // offset 0x8C
    CUtlString m_weightListName; // offset 0x90, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_hipBoneName; // offset 0x98, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flHipBoneTranslationScale; // offset 0xA0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nEffectedBoneCount; // offset 0xA4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxImpactForce; // offset 0xA8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMinImpactForce; // offset 0xAC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flWhipImpactScale; // offset 0xB0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCounterRotationScale; // offset 0xB4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDistanceFadeScale; // offset 0xB8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPropagationScale; // offset 0xBC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flWhipDelay; // offset 0xC0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpringStrength; // offset 0xC4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flWhipSpringStrength; // offset 0xC8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flHipDipSpringStrength; // offset 0xCC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flHipDipImpactScale; // offset 0xD0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flHipDipDelay; // offset 0xD4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bResetBase; // offset 0xD8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_00D9[0x7]; // offset 0xD9
};
