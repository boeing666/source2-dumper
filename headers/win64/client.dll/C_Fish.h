#pragma once

class C_Fish : public CBaseAnimGraph /*0x0*/  // sizeof 0x1270, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    VectorWS m_pos; // offset 0x1180, size 0xC, align 4 | MNotSaved
    Vector m_vel; // offset 0x118C, size 0xC, align 4 | MNotSaved
    QAngle m_angles; // offset 0x1198, size 0xC, align 4 | MNotSaved
    int32 m_localLifeState; // offset 0x11A4, size 0x4, align 4 | MNotSaved
    float32 m_deathDepth; // offset 0x11A8, size 0x4, align 4 | MNotSaved
    float32 m_deathAngle; // offset 0x11AC, size 0x4, align 4 | MNotSaved
    float32 m_buoyancy; // offset 0x11B0, size 0x4, align 4 | MNotSaved
    char _pad_11B4[0x4]; // offset 0x11B4
    CountdownTimer m_wiggleTimer; // offset 0x11B8, size 0x18, align 8 | MNotSaved
    float32 m_wigglePhase; // offset 0x11D0, size 0x4, align 4 | MNotSaved
    float32 m_wiggleRate; // offset 0x11D4, size 0x4, align 4 | MNotSaved
    VectorWS m_actualPos; // offset 0x11D8, size 0xC, align 4 | MNotSaved
    QAngle m_actualAngles; // offset 0x11E4, size 0xC, align 4 | MNotSaved
    VectorWS m_poolOrigin; // offset 0x11F0, size 0xC, align 4 | MNotSaved
    float32 m_waterLevel; // offset 0x11FC, size 0x4, align 4 | MNotSaved
    bool m_gotUpdate; // offset 0x1200, size 0x1, align 1 | MNotSaved
    char _pad_1201[0x3]; // offset 0x1201
    float32 m_x; // offset 0x1204, size 0x4, align 4 | MNotSaved
    float32 m_y; // offset 0x1208, size 0x4, align 4 | MNotSaved
    float32 m_z; // offset 0x120C, size 0x4, align 4 | MNotSaved
    float32 m_angle; // offset 0x1210, size 0x4, align 4 | MNotSaved
    float32[20] m_errorHistory; // offset 0x1214, size 0x50, align 4 | MNotSaved
    int32 m_errorHistoryIndex; // offset 0x1264, size 0x4, align 4 | MNotSaved
    int32 m_errorHistoryCount; // offset 0x1268, size 0x4, align 4 | MNotSaved
    float32 m_averageError; // offset 0x126C, size 0x4, align 4 | MNotSaved
};
