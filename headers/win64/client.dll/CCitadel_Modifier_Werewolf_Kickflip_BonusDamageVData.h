#pragma once

class CCitadel_Modifier_Werewolf_Kickflip_BonusDamageVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CSoundEventName m_strOnBulletHitDamageSound; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageFX; // offset 0x7A0, size 0xE0, align 8 | MPropertyStartGroup
};
