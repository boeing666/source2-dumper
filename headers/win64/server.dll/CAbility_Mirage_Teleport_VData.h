#pragma once

class CAbility_Mirage_Teleport_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1698, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_InterruptNotificationModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_preTeleportParticle; // offset 0x13C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // offset 0x14A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // offset 0x1580, size 0xE0, align 8
    CSoundEventName m_strArriveSound; // offset 0x1660, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDepartSound; // offset 0x1670, size 0x10, align 8
    CSoundEventName m_strChannelDestinationSound; // offset 0x1680, size 0x10, align 8
    float32 m_flObjectiveOffset; // offset 0x1690, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1694[0x4]; // offset 0x1694
};
