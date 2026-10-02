#pragma once

class CModifierRestorativeGooVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RestorativeGooEndParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ModelName; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_SelfCubeModelName; // offset 0x950, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BreakoutProgressBarModifier; // offset 0xA30, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PostCubeBuffModifier; // offset 0xA40, size 0x10, align 8
    CSoundEventName m_NonTargetLoopingSound; // offset 0xA50, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_TargetLoopingSound; // offset 0xA60, size 0x10, align 8
    CSoundEventName m_LightMeleeImpact; // offset 0xA70, size 0x10, align 8
    CSoundEventName m_HeavyMeleeImpact; // offset 0xA80, size 0x10, align 8
    float32 m_flBreakoutProectionTime; // offset 0xA90, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0A94[0x4]; // offset 0xA94
};
