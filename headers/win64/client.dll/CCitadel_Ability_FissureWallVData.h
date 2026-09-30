#pragma once

class CCitadel_Ability_FissureWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyWallParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyWallParticle; // offset 0x1480, size 0xE0, align 8
    CSoundEventName m_WallTravelSoundLoop; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallRemoveSound; // offset 0x1570, size 0x10, align 8
    CSoundEventName m_strApplySlowSound; // offset 0x1580, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_WallModifier; // offset 0x1590, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x15A0, size 0x10, align 8
    float32 m_flWallPreviewDropdownRate; // offset 0x15B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flWallStepHeight; // offset 0x15B4, size 0x4, align 4
    float32 m_flWallTraceRadius; // offset 0x15B8, size 0x4, align 4
    char _pad_15BC[0x4]; // offset 0x15BC
};
