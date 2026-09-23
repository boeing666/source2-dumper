#pragma once

class CParticleFunction  // sizeof 0x1E0, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CParticleCollectionFloatInput m_flOpStrength; // offset 0x8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleEndcapMode_t m_nOpEndCapState; // offset 0x180, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleToolsState_t m_nToolsState; // offset 0x184, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flOpStartFadeInTime; // offset 0x188, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    float32 m_flOpEndFadeInTime; // offset 0x18C, size 0x4, align 4 | MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    float32 m_flOpStartFadeOutTime; // offset 0x190, size 0x4, align 4 | MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    float32 m_flOpEndFadeOutTime; // offset 0x194, size 0x4, align 4 | MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    float32 m_flOpFadeOscillatePeriod; // offset 0x198, size 0x4, align 4 | MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    bool m_bNormalizeToStopTime; // offset 0x19C, size 0x1, align 1 | MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    char _pad_019D[0x3]; // offset 0x19D
    float32 m_flOpTimeOffsetMin; // offset 0x1A0, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    float32 m_flOpTimeOffsetMax; // offset 0x1A4, size 0x4, align 4 | MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    int32 m_nOpTimeOffsetSeed; // offset 0x1A8, size 0x4, align 4 | MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    int32 m_nOpTimeScaleSeed; // offset 0x1AC, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    float32 m_flOpTimeScaleMin; // offset 0x1B0, size 0x4, align 4 | MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    float32 m_flOpTimeScaleMax; // offset 0x1B4, size 0x4, align 4 | MPropertyFriendlyName MParticleAdvancedField MPropertySortPriority
    char _pad_01B8[0x2]; // offset 0x1B8
    bool m_bDisableOperator; // offset 0x1BA, size 0x1, align 1 | MPropertyStartGroup MPropertySuppressField
    char _pad_01BB[0x5]; // offset 0x1BB
    CUtlString m_Notes; // offset 0x1C0, size 0x8, align 8 | MPropertyFriendlyName MParticleHelpField MPropertyAttributeEditor MPropertySortPriority
    char _pad_01C8[0x18]; // offset 0x1C8
};
