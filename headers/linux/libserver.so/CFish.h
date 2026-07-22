#pragma once

class CFish : public CBaseAnimGraph /*0x0*/  // sizeof 0xD50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    CHandle< CFishPool > m_pool; // offset 0xC40, size 0x4, align 4
    uint32 m_id; // offset 0xC44, size 0x4, align 4
    float32 m_x; // offset 0xC48, size 0x4, align 4 | MNotSaved
    float32 m_y; // offset 0xC4C, size 0x4, align 4 | MNotSaved
    float32 m_z; // offset 0xC50, size 0x4, align 4 | MNotSaved
    float32 m_angle; // offset 0xC54, size 0x4, align 4
    float32 m_angleChange; // offset 0xC58, size 0x4, align 4
    Vector m_forward; // offset 0xC5C, size 0xC, align 4
    Vector m_perp; // offset 0xC68, size 0xC, align 4
    VectorWS m_poolOrigin; // offset 0xC74, size 0xC, align 4
    float32 m_waterLevel; // offset 0xC80, size 0x4, align 4
    float32 m_speed; // offset 0xC84, size 0x4, align 4
    float32 m_desiredSpeed; // offset 0xC88, size 0x4, align 4
    float32 m_calmSpeed; // offset 0xC8C, size 0x4, align 4
    float32 m_panicSpeed; // offset 0xC90, size 0x4, align 4
    float32 m_avoidRange; // offset 0xC94, size 0x4, align 4
    CountdownTimer m_turnTimer; // offset 0xC98, size 0x18, align 8 | MNotSaved
    bool m_turnClockwise; // offset 0xCB0, size 0x1, align 1
    char _pad_0CB1[0x7]; // offset 0xCB1
    CountdownTimer m_goTimer; // offset 0xCB8, size 0x18, align 8 | MNotSaved
    CountdownTimer m_moveTimer; // offset 0xCD0, size 0x18, align 8 | MNotSaved
    CountdownTimer m_panicTimer; // offset 0xCE8, size 0x18, align 8 | MNotSaved
    CountdownTimer m_disperseTimer; // offset 0xD00, size 0x18, align 8 | MNotSaved
    CountdownTimer m_proximityTimer; // offset 0xD18, size 0x18, align 8 | MNotSaved
    CUtlVector< CFish* > m_visible; // offset 0xD30, size 0x18, align 8 | MNotSaved
    char _pad_0D48[0x8]; // offset 0xD48
};
