﻿using System;
using System.Runtime.InteropServices;
using System.Windows.Interop;

namespace InteropSDL.App.WPF
{
    public class SdlHost : HwndHost
    {
        internal const int
            WsChild = 0x40000000,
            WsVisible = 0x10000000,
            HostId = 0x00000002,
            WmErasebkgnd = 0x0014;

        private IntPtr _hwndHost;

        private interop_sdl.lib.core.view _core;

        private readonly int _hostHeight;
        private readonly int _hostWidth;

        public SdlHost(double height, double width)
        {
            _hostHeight = (int)height;
            _hostWidth = (int)width;
        }

        protected override HandleRef BuildWindowCore(HandleRef hwndParent)
        {
            _hwndHost = CreateWindowEx(0, "static", "",
                WsChild | WsVisible,
                0, 0,
                _hostWidth,
                _hostHeight, 
                hwndParent.Handle,
                (IntPtr)HostId,
                IntPtr.Zero,
                0);

            _core = new interop_sdl.lib.core.view();

            unsafe
            {
                _core.initialise(_hwndHost.ToPointer());
            }
            
            _core.update();
            return new HandleRef(this, _hwndHost);
        }

        protected override IntPtr WndProc(IntPtr hwnd, int msg, IntPtr wParam, IntPtr lParam, ref bool handled)
        {
            switch (msg)
            {
                case WmErasebkgnd:
                    _core.update();
                    handled = true;
                    break;
                default:
                    handled = false;
                    break;
            }


            return IntPtr.Zero;
        }

        protected override void DestroyWindowCore(HandleRef hwnd)
        {
            DestroyWindow(hwnd.Handle);
        }

        // P/Invoke declarations
        [DllImport("user32.dll", EntryPoint = "CreateWindowEx", CharSet = CharSet.Unicode)]
        internal static extern IntPtr CreateWindowEx(int dwExStyle,
            string lpszClassName,
            string lpszWindowName,
            int style,
            int x, int y,
            int width, int height,
            IntPtr hwndParent,
            IntPtr hMenu,
            IntPtr hInst,
            [MarshalAs(UnmanagedType.AsAny)] object pvParam);

        [DllImport("user32.dll", EntryPoint = "DestroyWindow", CharSet = CharSet.Unicode)]
        internal static extern bool DestroyWindow(IntPtr hwnd);
    }
}