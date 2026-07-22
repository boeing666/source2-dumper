#pragma once

class CDOTABehaviorAttackPhase  // sizeof 0xC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x5C]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x5C, size 0x4, align 4
    CountdownTimer m_attackTimer; // offset 0x60, size 0x18, align 8
    bool m_bAttackComplete; // offset 0x78, size 0x1, align 1
    char _pad_0079[0x27]; // offset 0x79
    bool m_bDeny; // offset 0xA0, size 0x1, align 1
    bool m_bCastAttack; // offset 0xA1, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0xA2, size 0x1, align 1
    char _pad_00A3[0x1]; // offset 0xA3
    float32 m_flBackswingDuration; // offset 0xA4, size 0x4, align 4
    float32 m_flAnimSpeed; // offset 0xA8, size 0x4, align 4
    float32 m_flAttackPortionPriorToTimer; // offset 0xAC, size 0x4, align 4
    HSequence m_iSequence; // offset 0xB0, size 0x4, align 255
    char _pad_00B4[0xC]; // offset 0xB4
};
