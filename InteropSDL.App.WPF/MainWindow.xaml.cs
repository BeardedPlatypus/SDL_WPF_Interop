using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Interop;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace InteropSDL.App.WPF
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        internal const int
            LbnSelchange = 0x00000001,
            WmCommand = 0x00000111,
            LbGetcursel = 0x00000188,
            LbGettextlen = 0x0000018A,
            LbAddstring = 0x00000180,
            LbGettext = 0x00000189,
            LbDeletestring = 0x00000182,
            LbGetcount = 0x0000018B;

        private SdlHost _sdlHost;

        public MainWindow()
        {
            InitializeComponent();
        }

        private void On_UIReady(object sender, EventArgs e)
        {
            _sdlHost = new SdlHost(SDLHostElement.ActualHeight, SDLHostElement.ActualWidth);
            SDLHostElement.Child = _sdlHost;

            _sdlHost.MessageHook += new HwndSourceHook(ControlMsgFilter);
        }

        private IntPtr ControlMsgFilter(IntPtr hwnd, int msg, IntPtr wParam, IntPtr lParam, ref bool handled)
        {
            handled = false;
            if (msg == WmCommand)
            {
            }
            return IntPtr.Zero;
        }
    }
}
