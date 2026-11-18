#pragma once

class CTriggerLerpObject : public CBaseTrigger /*0x0*/  // sizeof 0xDB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    CUtlSymbolLarge m_iszLerpTarget; // offset 0xD10, size 0x8, align 8
    CHandle< CBaseEntity > m_hLerpTarget; // offset 0xD18, size 0x4, align 4
    char _pad_0D1C[0x4]; // offset 0xD1C
    CUtlSymbolLarge m_iszLerpTargetAttachment; // offset 0xD20, size 0x8, align 8
    AttachmentHandle_t m_hLerpTargetAttachment; // offset 0xD28, size 0x1, align 255
    char _pad_0D29[0x3]; // offset 0xD29
    float32 m_flLerpDuration; // offset 0xD2C, size 0x4, align 4
    bool m_bAttachedEntityWasParented; // offset 0xD30, size 0x1, align 1
    bool m_bLerpRestoreMoveType; // offset 0xD31, size 0x1, align 1
    bool m_bSingleLerpObject; // offset 0xD32, size 0x1, align 1
    char _pad_0D33[0x5]; // offset 0xD33
    CUtlVector< lerpdata_t > m_vecLerpingObjects; // offset 0xD38, size 0x18, align 8
    CUtlSymbolLarge m_iszLerpEffect; // offset 0xD50, size 0x8, align 8
    CUtlSymbolLarge m_iszLerpSound; // offset 0xD58, size 0x8, align 8
    bool m_bAttachTouchingObject; // offset 0xD60, size 0x1, align 1
    char _pad_0D61[0x3]; // offset 0xD61
    CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // offset 0xD64, size 0x4, align 4
    CEntityIOOutput m_OnLerpStarted; // offset 0xD68, size 0x18, align 255
    CEntityIOOutput m_OnLerpFinished; // offset 0xD80, size 0x18, align 255
    CEntityIOOutput m_OnDetached; // offset 0xD98, size 0x18, align 255
};
