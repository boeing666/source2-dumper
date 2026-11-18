#pragma once

class CTriggerLerpObject : public CBaseTrigger /*0x0*/  // sizeof 0xAD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CUtlSymbolLarge m_iszLerpTarget; // offset 0xA30, size 0x8, align 8
    CHandle< CBaseEntity > m_hLerpTarget; // offset 0xA38, size 0x4, align 4
    char _pad_0A3C[0x4]; // offset 0xA3C
    CUtlSymbolLarge m_iszLerpTargetAttachment; // offset 0xA40, size 0x8, align 8
    AttachmentHandle_t m_hLerpTargetAttachment; // offset 0xA48, size 0x1, align 255
    char _pad_0A49[0x3]; // offset 0xA49
    float32 m_flLerpDuration; // offset 0xA4C, size 0x4, align 4
    bool m_bAttachedEntityWasParented; // offset 0xA50, size 0x1, align 1
    bool m_bLerpRestoreMoveType; // offset 0xA51, size 0x1, align 1
    bool m_bSingleLerpObject; // offset 0xA52, size 0x1, align 1
    char _pad_0A53[0x5]; // offset 0xA53
    CUtlVector< lerpdata_t > m_vecLerpingObjects; // offset 0xA58, size 0x18, align 8
    CUtlSymbolLarge m_iszLerpEffect; // offset 0xA70, size 0x8, align 8
    CUtlSymbolLarge m_iszLerpSound; // offset 0xA78, size 0x8, align 8
    bool m_bAttachTouchingObject; // offset 0xA80, size 0x1, align 1
    char _pad_0A81[0x3]; // offset 0xA81
    CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // offset 0xA84, size 0x4, align 4
    CEntityIOOutput m_OnLerpStarted; // offset 0xA88, size 0x18, align 255
    CEntityIOOutput m_OnLerpFinished; // offset 0xAA0, size 0x18, align 255
    CEntityIOOutput m_OnDetached; // offset 0xAB8, size 0x18, align 255
};
