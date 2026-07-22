#pragma once

struct DeploymentInfo_t  // sizeof 0x200, align 0x8 (client) {MGetKV3ClassDefaults}
{
    bool m_bRequiresUpNormal; // offset 0x0, size 0x1, align 1 | MPropertyDescription
    bool m_bGroundCheck; // offset 0x1, size 0x1, align 1 | MPropertyDescription
    bool m_bPlaceFlat; // offset 0x2, size 0x1, align 1 | MPropertyDescription
    char _pad_0003[0x1]; // offset 0x3
    float32 m_flFlatYawOffset; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    bool m_bPlaceNormalToSurface; // offset 0x8, size 0x1, align 1 | MPropertyDescription
    bool m_bPointTrace; // offset 0x9, size 0x1, align 1 | MPropertyDescription
    bool m_bCheckPlayerFit; // offset 0xA, size 0x1, align 1 | MPropertyDescription
    char _pad_000B[0x1]; // offset 0xB
    float32 m_flModelVerticalPlacementScaleOffset; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    bool m_bDownCheckIgnoreLos; // offset 0x10, size 0x1, align 1 | MPropertyDescription
    char _pad_0011[0x7]; // offset 0x11
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_previewModel; // offset 0x18, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_previewParticle; // offset 0xF8, size 0xE0, align 8 | MPropertyDescription
    CUtlString m_strPreviewParticleEffectConfig; // offset 0x1D8, size 0x8, align 8
    CUtlString m_strExraBodygroup; // offset 0x1E0, size 0x8, align 8
    CUtlString m_strPreviewClass; // offset 0x1E8, size 0x8, align 8
    float32 m_flPreviewModelScale; // offset 0x1F0, size 0x4, align 4
    float32 m_flGroundCheckHeightOffset; // offset 0x1F4, size 0x4, align 4 | MPropertyDescription
    float32 m_flGroundCheckHeightOffsetDown; // offset 0x1F8, size 0x4, align 4 | MPropertyDescription
    char _pad_01FC[0x4]; // offset 0x1FC
};
