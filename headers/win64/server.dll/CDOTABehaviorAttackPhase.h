#pragma once

class CDOTABehaviorAttackPhase  // sizeof 0xC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x60, size 0x4, align 4
    char _pad_0064[0x4]; // offset 0x64
    CountdownTimer m_attackTimer; // offset 0x68, size 0x18, align 8
    bool m_bAttackComplete; // offset 0x80, size 0x1, align 1
    char _pad_0081[0x27]; // offset 0x81
    bool m_bDeny; // offset 0xA8, size 0x1, align 1
    bool m_bCastAttack; // offset 0xA9, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0xAA, size 0x1, align 1
    char _pad_00AB[0x1]; // offset 0xAB
    float32 m_flBackswingDuration; // offset 0xAC, size 0x4, align 4
    float32 m_flAnimSpeed; // offset 0xB0, size 0x4, align 4
    float32 m_flAttackPortionPriorToTimer; // offset 0xB4, size 0x4, align 4
    HSequence m_iSequence; // offset 0xB8, size 0x4, align 255
    char _pad_00BC[0xC]; // offset 0xBC
};
