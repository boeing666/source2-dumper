#pragma once

enum EHudPanelClassStatus_t : uint32_t  // sizeof 0x4
{
    k_eHudPanelClassStatus_Undefined = -1,
    k_eHudPanelClassStatus_DoesNotHaveClass = 0,
    k_eHudPanelClassStatus_HasClass = 1,
};
