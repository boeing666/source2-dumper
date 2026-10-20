#pragma once

class CCitadel_Ability_FissureWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyWallParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyWallParticle; // offset 0x1150, size 0xE0, align 8
    CSoundEventName m_WallTravelSoundLoop; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallRemoveSound; // offset 0x1240, size 0x10, align 8
    CSoundEventName m_strApplySlowSound; // offset 0x1250, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_WallModifier; // offset 0x1260, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1270, size 0x10, align 8
    float32 m_flWallPreviewDropdownRate; // offset 0x1280, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flWallStepHeight; // offset 0x1284, size 0x4, align 4
    float32 m_flWallTraceRadius; // offset 0x1288, size 0x4, align 4
    char _pad_128C[0x4]; // offset 0x128C
};
