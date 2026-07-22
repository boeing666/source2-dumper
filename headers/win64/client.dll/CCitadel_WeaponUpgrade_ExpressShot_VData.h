#pragma once

class CCitadel_WeaponUpgrade_ExpressShot_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1AA0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReadyParticle; // offset 0x18B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // offset 0x1998, size 0xE0, align 8
    float32 flShotDelay; // offset 0x1A78, size 0x4, align 4 | MPropertyGroupName
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CSoundEventName m_strOffCooldownSound; // offset 0x1A80, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ProcNotificationModifier; // offset 0x1A90, size 0x10, align 8 | MPropertyGroupName
};
