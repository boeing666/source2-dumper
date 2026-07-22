#pragma once

class CCitadel_Ability_Doorman_Doorway_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1F68, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CSoundEventName m_DoorOpenStartSound; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_DoorOpenEndSound; // offset 0x1828, size 0x10, align 8
    CSoundEventName m_DoorPlaceSound; // offset 0x1838, size 0x10, align 8
    CSoundEventName m_DoorPlacementClearedSound; // offset 0x1848, size 0x10, align 8
    CSoundEventName m_DoorStartCastSound; // offset 0x1858, size 0x10, align 8
    CSoundEventName m_DoorEndCastSound; // offset 0x1868, size 0x10, align 8
    CSoundEventName m_DoorExpireSound; // offset 0x1878, size 0x10, align 8
    CSoundEventName m_DoorLoopSound; // offset 0x1888, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1898, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PendingDoorParticle; // offset 0x1978, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PlaceDoorParticle; // offset 0x1A58, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DoorDurationParticle; // offset 0x1B38, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DoorDestructionParticle; // offset 0x1C18, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hDoorModel; // offset 0x1CF8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hPortalModel; // offset 0x1DD8, size 0xE0, align 8
    CPanoramaImageName m_strSingleDoorAbilityImage; // offset 0x1EB8, size 0x10, align 8 | MPropertyStartGroup
    Color m_ColorStart; // offset 0x1EC8, size 0x4, align 1 | MPropertyFriendlyName MPropertyDescription
    Color m_ColorEnd; // offset 0x1ECC, size 0x4, align 1 | MPropertyFriendlyName MPropertyDescription
    CEmbeddedSubclass< CCitadelModifier > m_DoorwayTimerModifier; // offset 0x1ED0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PortalBarrierModifier; // offset 0x1EE0, size 0x10, align 8
    float32 m_flPlacementWallTestDistance; // offset 0x1EF0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPlacementWallTestExtentsSolidScale; // offset 0x1EF4, size 0x4, align 4
    float32 m_flPlacementWallTestExtentsWallScale; // offset 0x1EF8, size 0x4, align 4
    float32 m_flPlacementWallTestSphereRadius; // offset 0x1EFC, size 0x4, align 4
    Vector m_vPlacementOffset; // offset 0x1F00, size 0xC, align 4
    float32 m_flPlacementCooldown; // offset 0x1F0C, size 0x4, align 4
    float32 m_flPlacementRangeHintDuration; // offset 0x1F10, size 0x4, align 4
    float32 m_flPlacementSphereMaxDesat; // offset 0x1F14, size 0x4, align 4
    Color m_colorPlacementSphereSat; // offset 0x1F18, size 0x4, align 1
    Color m_colorPlacementSphereDesat; // offset 0x1F1C, size 0x4, align 1
    Color m_colorPlacementSphereOutline; // offset 0x1F20, size 0x4, align 1
    char _pad_1F24[0x4]; // offset 0x1F24
    CPiecewiseCurve m_curvePlacementFail; // offset 0x1F28, size 0x40, align 8
};
