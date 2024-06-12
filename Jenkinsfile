pipeline {
    agent {
        dockerfile {
            dir 'calculator-lib/cross-compile'
        }
    }
    stages {
        stage('init') {
            steps{
                sh 'echo Hello'
            }

        }
    }
}
