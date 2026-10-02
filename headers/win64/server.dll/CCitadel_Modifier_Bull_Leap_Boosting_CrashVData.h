#pragma once

class CCitadel_Modifier_Bull_Leap_Boosting_CrashVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrashTrailParticle; // offset 0x7A0, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flCollideRadius; // offset 0x880, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0884[0x4]; // offset 0x884
};
