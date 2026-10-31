#pragma once

class CCitadel_Modifier_Nurse_LeechTherapy_Target_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_EatingBuffsModifier; // offset 0x878, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLeechRemoveSound; // offset 0x888, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_PurgeSound; // offset 0x898, size 0x10, align 8
};
