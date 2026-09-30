#pragma once

class CCitadel_Ability_Doorman_Doorway_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AF0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CSoundEventName m_DoorOpenStartSound; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_DoorOpenEndSound; // offset 0x13B0, size 0x10, align 8
    CSoundEventName m_DoorPlaceSound; // offset 0x13C0, size 0x10, align 8
    CSoundEventName m_DoorPlacementClearedSound; // offset 0x13D0, size 0x10, align 8
    CSoundEventName m_DoorStartCastSound; // offset 0x13E0, size 0x10, align 8
    CSoundEventName m_DoorEndCastSound; // offset 0x13F0, size 0x10, align 8
    CSoundEventName m_DoorExpireSound; // offset 0x1400, size 0x10, align 8
    CSoundEventName m_DoorLoopSound; // offset 0x1410, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1420, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PendingDoorParticle; // offset 0x1500, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PlaceDoorParticle; // offset 0x15E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DoorDurationParticle; // offset 0x16C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DoorDestructionParticle; // offset 0x17A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hDoorModel; // offset 0x1880, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hPortalModel; // offset 0x1960, size 0xE0, align 8
    CPanoramaImageName m_strSingleDoorAbilityImage; // offset 0x1A40, size 0x10, align 8 | MPropertyStartGroup
    Color m_ColorStart; // offset 0x1A50, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    Color m_ColorEnd; // offset 0x1A54, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    CEmbeddedSubclass< CCitadelModifier > m_DoorwayTimerModifier; // offset 0x1A58, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PortalBarrierModifier; // offset 0x1A68, size 0x10, align 8
    float32 m_flPlacementWallTestDistance; // offset 0x1A78, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPlacementWallTestExtentsSolidScale; // offset 0x1A7C, size 0x4, align 4
    float32 m_flPlacementWallTestExtentsWallScale; // offset 0x1A80, size 0x4, align 4
    float32 m_flPlacementWallTestSphereRadius; // offset 0x1A84, size 0x4, align 4
    Vector m_vPlacementOffset; // offset 0x1A88, size 0xC, align 4
    float32 m_flPlacementCooldown; // offset 0x1A94, size 0x4, align 4
    float32 m_flPlacementRangeHintDuration; // offset 0x1A98, size 0x4, align 4
    float32 m_flPlacementSphereMaxDesat; // offset 0x1A9C, size 0x4, align 4
    Color m_colorPlacementSphereSat; // offset 0x1AA0, size 0x4, align 4
    Color m_colorPlacementSphereDesat; // offset 0x1AA4, size 0x4, align 4
    Color m_colorPlacementSphereOutline; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CPiecewiseCurve m_curvePlacementFail; // offset 0x1AB0, size 0x40, align 8
};
