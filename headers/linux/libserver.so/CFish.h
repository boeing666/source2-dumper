#pragma once

class CFish : public CBaseAnimGraph /*0x0*/  // sizeof 0xE30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD20]; // offset 0x0
    CHandle< CFishPool > m_pool; // offset 0xD20, size 0x4, align 4
    uint32 m_id; // offset 0xD24, size 0x4, align 4
    float32 m_x; // offset 0xD28, size 0x4, align 4 | MNotSaved
    float32 m_y; // offset 0xD2C, size 0x4, align 4 | MNotSaved
    float32 m_z; // offset 0xD30, size 0x4, align 4 | MNotSaved
    float32 m_angle; // offset 0xD34, size 0x4, align 4
    float32 m_angleChange; // offset 0xD38, size 0x4, align 4
    Vector m_forward; // offset 0xD3C, size 0xC, align 4
    Vector m_perp; // offset 0xD48, size 0xC, align 4
    VectorWS m_poolOrigin; // offset 0xD54, size 0xC, align 4
    float32 m_waterLevel; // offset 0xD60, size 0x4, align 4
    float32 m_speed; // offset 0xD64, size 0x4, align 4
    float32 m_desiredSpeed; // offset 0xD68, size 0x4, align 4
    float32 m_calmSpeed; // offset 0xD6C, size 0x4, align 4
    float32 m_panicSpeed; // offset 0xD70, size 0x4, align 4
    float32 m_avoidRange; // offset 0xD74, size 0x4, align 4
    CountdownTimer m_turnTimer; // offset 0xD78, size 0x18, align 8 | MNotSaved
    bool m_turnClockwise; // offset 0xD90, size 0x1, align 1
    char _pad_0D91[0x7]; // offset 0xD91
    CountdownTimer m_goTimer; // offset 0xD98, size 0x18, align 8 | MNotSaved
    CountdownTimer m_moveTimer; // offset 0xDB0, size 0x18, align 8 | MNotSaved
    CountdownTimer m_panicTimer; // offset 0xDC8, size 0x18, align 8 | MNotSaved
    CountdownTimer m_disperseTimer; // offset 0xDE0, size 0x18, align 8 | MNotSaved
    CountdownTimer m_proximityTimer; // offset 0xDF8, size 0x18, align 8 | MNotSaved
    CUtlVector< CFish* > m_visible; // offset 0xE10, size 0x18, align 8 | MNotSaved
    char _pad_0E28[0x8]; // offset 0xE28
};
