#pragma once

class CFish : public CBaseAnimGraph /*0x0*/  // sizeof 0xBA0, align 0x10 [vtable] (server) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CHandle< CFishPool > m_pool; // offset 0xA90, size 0x4, align 4
    uint32 m_id; // offset 0xA94, size 0x4, align 4
    float32 m_x; // offset 0xA98, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNotSaved
    float32 m_y; // offset 0xA9C, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNotSaved
    float32 m_z; // offset 0xAA0, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNotSaved
    float32 m_angle; // offset 0xAA4, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_angleChange; // offset 0xAA8, size 0x4, align 4
    Vector m_forward; // offset 0xAAC, size 0xC, align 4
    Vector m_perp; // offset 0xAB8, size 0xC, align 4
    Vector m_poolOrigin; // offset 0xAC4, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    float32 m_waterLevel; // offset 0xAD0, size 0x4, align 4 | MNetworkEnable
    float32 m_speed; // offset 0xAD4, size 0x4, align 4
    float32 m_desiredSpeed; // offset 0xAD8, size 0x4, align 4
    float32 m_calmSpeed; // offset 0xADC, size 0x4, align 4
    float32 m_panicSpeed; // offset 0xAE0, size 0x4, align 4
    float32 m_avoidRange; // offset 0xAE4, size 0x4, align 4
    CountdownTimer m_turnTimer; // offset 0xAE8, size 0x18, align 255 | MNotSaved
    bool m_turnClockwise; // offset 0xB00, size 0x1, align 1
    char _pad_0B01[0x7]; // offset 0xB01
    CountdownTimer m_goTimer; // offset 0xB08, size 0x18, align 255 | MNotSaved
    CountdownTimer m_moveTimer; // offset 0xB20, size 0x18, align 255 | MNotSaved
    CountdownTimer m_panicTimer; // offset 0xB38, size 0x18, align 255 | MNotSaved
    CountdownTimer m_disperseTimer; // offset 0xB50, size 0x18, align 255 | MNotSaved
    CountdownTimer m_proximityTimer; // offset 0xB68, size 0x18, align 255 | MNotSaved
    CUtlVector< CFish* > m_visible; // offset 0xB80, size 0x18, align 8 | MNotSaved
    char _pad_0B98[0x8]; // offset 0xB98
};
