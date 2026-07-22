#pragma once

class C_Fish : public CBaseAnimGraph /*0x0*/  // sizeof 0xD98, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    Vector m_pos; // offset 0xCA8, size 0xC, align 4 | MNotSaved
    Vector m_vel; // offset 0xCB4, size 0xC, align 4 | MNotSaved
    QAngle m_angles; // offset 0xCC0, size 0xC, align 4 | MNotSaved
    int32 m_localLifeState; // offset 0xCCC, size 0x4, align 4 | MNotSaved
    float32 m_deathDepth; // offset 0xCD0, size 0x4, align 4 | MNotSaved
    float32 m_deathAngle; // offset 0xCD4, size 0x4, align 4 | MNotSaved
    float32 m_buoyancy; // offset 0xCD8, size 0x4, align 4 | MNotSaved
    char _pad_0CDC[0x4]; // offset 0xCDC
    CountdownTimer m_wiggleTimer; // offset 0xCE0, size 0x18, align 255 | MNotSaved
    float32 m_wigglePhase; // offset 0xCF8, size 0x4, align 4 | MNotSaved
    float32 m_wiggleRate; // offset 0xCFC, size 0x4, align 4 | MNotSaved
    Vector m_actualPos; // offset 0xD00, size 0xC, align 4 | MNotSaved
    QAngle m_actualAngles; // offset 0xD0C, size 0xC, align 4 | MNotSaved
    Vector m_poolOrigin; // offset 0xD18, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNotSaved
    float32 m_waterLevel; // offset 0xD24, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_gotUpdate; // offset 0xD28, size 0x1, align 1 | MNotSaved
    char _pad_0D29[0x3]; // offset 0xD29
    float32 m_x; // offset 0xD2C, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNetworkChangeCallback MNotSaved
    float32 m_y; // offset 0xD30, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNetworkChangeCallback MNotSaved
    float32 m_z; // offset 0xD34, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNetworkChangeCallback MNotSaved
    float32 m_angle; // offset 0xD38, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNetworkChangeCallback MNotSaved
    float32[20] m_errorHistory; // offset 0xD3C, size 0x50, align 4 | MNotSaved
    int32 m_errorHistoryIndex; // offset 0xD8C, size 0x4, align 4 | MNotSaved
    int32 m_errorHistoryCount; // offset 0xD90, size 0x4, align 4 | MNotSaved
    float32 m_averageError; // offset 0xD94, size 0x4, align 4 | MNotSaved
};
