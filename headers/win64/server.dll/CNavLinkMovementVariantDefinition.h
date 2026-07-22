#pragma once

class CNavLinkMovementVariantDefinition  // sizeof 0x108, align 0x8 (server) {MGetKV3ClassDefaults}
{
public:
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmGraphDefinition > > m_sExternalGraphName; // offset 0x0, size 0xE0, align 8 | MPropertyDescription
    BodySectionAuthority_t m_nBodySectionAuthority; // offset 0xE0, size 0x4, align 4 | MPropertyDescription
    bool m_bSupportsExit; // offset 0xE4, size 0x1, align 1 | MPropertyDescription
    char _pad_00E5[0x3]; // offset 0xE5
    float32 m_flMinimalPathLengthForMovingExit; // offset 0xE8, size 0x4, align 4 | MPropertyDescription
    float32 m_flSnapDestinationToPathGoalThreshold; // offset 0xEC, size 0x4, align 4 | MPropertyDescription
    CUtlVector< CNavLinkApproachConditions > m_vecApproachConditions; // offset 0xF0, size 0x18, align 8
};
