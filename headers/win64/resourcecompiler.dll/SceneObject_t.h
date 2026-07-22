#pragma once

struct SceneObject_t  // sizeof 0x88, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
    uint32 m_nObjectID; // offset 0x0, size 0x4, align 4
    Vector4D[3] m_vTransform; // offset 0x4, size 0x30, align 4
    float32 m_flFadeStartDistance; // offset 0x34, size 0x4, align 4
    float32 m_flFadeEndDistance; // offset 0x38, size 0x4, align 4
    Vector4D m_vTintColor; // offset 0x3C, size 0x10, align 4
    char _pad_004C[0x4]; // offset 0x4C
    CUtlString m_skin; // offset 0x50, size 0x8, align 8
    ObjectTypeFlags_t m_nObjectTypeFlags; // offset 0x58, size 0x4, align 4
    Vector m_vLightingOrigin; // offset 0x5C, size 0xC, align 4
    int16 m_nOverlayRenderOrder; // offset 0x68, size 0x2, align 2
    int16 m_nLODOverride; // offset 0x6A, size 0x2, align 2
    int32 m_nCubeMapPrecomputedHandshake; // offset 0x6C, size 0x4, align 4
    int32 m_nLightProbeVolumePrecomputedHandshake; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x4]; // offset 0x74
    CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // offset 0x78, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // offset 0x80, size 0x8, align 8
};
