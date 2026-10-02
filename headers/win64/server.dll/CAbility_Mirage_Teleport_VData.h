#pragma once

class CAbility_Mirage_Teleport_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_InterruptNotificationModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13F8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_preTeleportParticle; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // offset 0x14E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // offset 0x15C8, size 0xE0, align 8
    CSoundEventName m_strArriveSound; // offset 0x16A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDepartSound; // offset 0x16B8, size 0x10, align 8
    CSoundEventName m_strChannelDestinationSound; // offset 0x16C8, size 0x10, align 8
    float32 m_flObjectiveOffset; // offset 0x16D8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_16DC[0x4]; // offset 0x16DC
};
