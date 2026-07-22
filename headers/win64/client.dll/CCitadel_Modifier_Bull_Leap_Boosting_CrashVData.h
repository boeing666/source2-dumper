#pragma once

class CCitadel_Modifier_Bull_Leap_Boosting_CrashVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrashTrailParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flCollideRadius; // offset 0x840, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0844[0x4]; // offset 0x844
};
