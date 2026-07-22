#pragma once

struct ArtyGraphicInfo_t  // sizeof 0x218, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
    char _pad_0000[0x8]; // offset 0x0
    ArtyGraphicID_t m_unID; // offset 0x8, size 0x4, align 255
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_szSnippet; // offset 0x10, size 0x8, align 8
    CUtlString m_szUnit; // offset 0x18, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szModel; // offset 0x20, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticle; // offset 0x100, size 0xE0, align 8
    EArtyGraphicsType m_eType; // offset 0x1E0, size 0x1, align 1
    char _pad_01E1[0x3]; // offset 0x1E1
    QAngle m_vAngles; // offset 0x1E4, size 0xC, align 4
    Vector m_vPosition; // offset 0x1F0, size 0xC, align 4
    Vector m_vCameraOffset; // offset 0x1FC, size 0xC, align 4
    int32 m_nWidth; // offset 0x208, size 0x4, align 4
    int32 m_nHeight; // offset 0x20C, size 0x4, align 4
    bool m_bPlayEndcap; // offset 0x210, size 0x1, align 1
    char _pad_0211[0x3]; // offset 0x211
    float32 m_flDefaultScale; // offset 0x214, size 0x4, align 4
};
