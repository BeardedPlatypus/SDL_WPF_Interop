using System;
using System.Windows;

namespace InteropSDL.App.WPF
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private SdlHost _sdlHost;

        public MainWindow()
        {
            InitializeComponent();
        }

        private void On_UIReady(object sender, EventArgs e)
        {
            _sdlHost = new SdlHost(SDLHostElement.ActualHeight, SDLHostElement.ActualWidth);
            SDLHostElement.Child = _sdlHost;
        }
    }
}
