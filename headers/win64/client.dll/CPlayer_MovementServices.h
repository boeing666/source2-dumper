#pragma once

class CPlayer_MovementServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x240, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    int32 m_nImpulse; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
    CInButtonState m_nButtons; // offset 0x50, size 0x20, align 255 | MNotSaved
    uint64 m_nQueuedButtonDownMask; // offset 0x70, size 0x8, align 8
    uint64 m_nQueuedButtonChangeMask; // offset 0x78, size 0x8, align 8
    uint64 m_nButtonDoublePressed; // offset 0x80, size 0x8, align 8
    uint32[64] m_pButtonPressedCmdNumber; // offset 0x88, size 0x100, align 4 | MNotSaved
    uint32 m_nLastCommandNumberProcessed; // offset 0x188, size 0x4, align 4 | MNotSaved
    char _pad_018C[0x4]; // offset 0x18C
    uint64 m_nToggleButtonDownMask; // offset 0x190, size 0x8, align 8 | MNetworkEnable MNetworkUserGroup
    char _pad_0198[0x8]; // offset 0x198
    float32 m_flMaxspeed; // offset 0x1A0, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32[4] m_arrForceSubtickMoveWhen; // offset 0x1A4, size 0x10, align 4 | MNetworkEnable
    float32 m_flForwardMove; // offset 0x1B4, size 0x4, align 4
    float32 m_flLeftMove; // offset 0x1B8, size 0x4, align 4
    float32 m_flUpMove; // offset 0x1BC, size 0x4, align 4
    Vector m_vecLastMovementImpulses; // offset 0x1C0, size 0xC, align 4
    char _pad_01CC[0x5C]; // offset 0x1CC
    QAngle m_vecOldViewAngles; // offset 0x228, size 0xC, align 4
    char _pad_0234[0xC]; // offset 0x234
};
