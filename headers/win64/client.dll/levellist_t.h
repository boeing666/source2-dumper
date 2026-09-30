#pragma once

struct levellist_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_sMapName; // offset 0x0, size 0x8, align 8
    CUtlString m_sLandmarkName; // offset 0x8, size 0x8, align 8
    CEntityHandle m_hEntLandmark; // offset 0x10, size 0x4, align 4
    VectorWS m_vecLandmarkOrigin; // offset 0x14, size 0xC, align 4
    QAngle m_vecLandmarkAngles; // offset 0x20, size 0xC, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
