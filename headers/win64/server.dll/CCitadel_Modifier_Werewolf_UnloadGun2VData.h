#pragma once

class CCitadel_Modifier_Werewolf_UnloadGun2VData : public CCitadel_Modifier_BaseBulletPreRollProcVData /*0x0*/  // sizeof 0x9C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8C8]; // offset 0x0
    CSoundEventName m_strStackProcSound; // offset 0x8C8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strStackProcEffect; // offset 0x8D8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StackingModifier; // offset 0x9B8, size 0x10, align 8 | MPropertyStartGroup
};
