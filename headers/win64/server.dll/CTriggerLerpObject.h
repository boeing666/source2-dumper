#pragma once

class CTriggerLerpObject : public CBaseTrigger /*0x0*/  // sizeof 0x990, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    CUtlSymbolLarge m_iszLerpTarget; // offset 0x8F0, size 0x8, align 8
    CHandle< CBaseEntity > m_hLerpTarget; // offset 0x8F8, size 0x4, align 4
    char _pad_08FC[0x4]; // offset 0x8FC
    CUtlSymbolLarge m_iszLerpTargetAttachment; // offset 0x900, size 0x8, align 8
    AttachmentHandle_t m_hLerpTargetAttachment; // offset 0x908, size 0x1, align 255
    char _pad_0909[0x3]; // offset 0x909
    float32 m_flLerpDuration; // offset 0x90C, size 0x4, align 4
    bool m_bAttachedEntityWasParented; // offset 0x910, size 0x1, align 1
    bool m_bLerpRestoreMoveType; // offset 0x911, size 0x1, align 1
    bool m_bSingleLerpObject; // offset 0x912, size 0x1, align 1
    char _pad_0913[0x5]; // offset 0x913
    CUtlVector< lerpdata_t > m_vecLerpingObjects; // offset 0x918, size 0x18, align 8
    CUtlSymbolLarge m_iszLerpEffect; // offset 0x930, size 0x8, align 8
    CUtlSymbolLarge m_iszLerpSound; // offset 0x938, size 0x8, align 8
    bool m_bAttachTouchingObject; // offset 0x940, size 0x1, align 1
    char _pad_0941[0x3]; // offset 0x941
    CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // offset 0x944, size 0x4, align 4
    CEntityIOOutput m_OnLerpStarted; // offset 0x948, size 0x18, align 255
    CEntityIOOutput m_OnLerpFinished; // offset 0x960, size 0x18, align 255
    CEntityIOOutput m_OnDetached; // offset 0x978, size 0x18, align 255
};
