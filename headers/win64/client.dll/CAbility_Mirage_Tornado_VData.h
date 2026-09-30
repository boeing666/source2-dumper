#pragma once

class CAbility_Mirage_Tornado_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1628, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TornadoCastParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x1480, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_WhirlwindEvasionModifier; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TornadoAura; // offset 0x1570, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AdditionalTornadoMover; // offset 0x1580, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTravelingInTornado; // offset 0x1590, size 0x88, align 8 | MPropertyStartGroup
    CSoundEventName m_PurgeSound; // offset 0x1618, size 0x10, align 8 | MPropertyStartGroup
};
