#pragma once

class CAbility_Mirage_Tornado_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1310, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TornadoCastParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x1150, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_WhirlwindEvasionModifier; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TornadoAura; // offset 0x1240, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AdditionalTornadoMover; // offset 0x1250, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTravelingInTornado; // offset 0x1260, size 0xA0, align 8 | MPropertyStartGroup
    CSoundEventName m_PurgeSound; // offset 0x1300, size 0x10, align 8 | MPropertyStartGroup
};
